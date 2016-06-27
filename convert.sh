#!/bin/sh

set -e

# tex files are already in repo
# lyx --export latex tango.lyx

for i in `find . -iname "*.tex"`
do
  # use minted package which pandoc understands
  sed -i 's/\\begin{lyxcode}/\\begin{minted}[linenos]{cpp}/g' "$i"
  sed -i 's/\\end{lyxcode}/\\end{minted}/g' "$i"

  # throw away picture hack
  sed -i 's/\\input{.*\/line.tex}//g' "$i"
  sed -i 's/\\input{line.tex}//g' "$i"

  # move labels inside {} into the next line
  sed -i 's/\(\\label{[^}]*}\)}$/}\n\1/g' "$i"
done

# compile the tex file, on errors the script aborts
latexmk --norc --dvi -latexoption="-shell-esc" tango.tex
dvipdf tango.dvi

# LaTeX -> RST (one time conversion)
# requires pandoc 1.17.1
pandoc -s -S --toc --listings --wrap=auto tango.tex -o tango.rst

for i in `find . -iname "*.rst"`
do
  # remove manual line numbers in code
  sed -i 's/^\s\+[0-9]\+/  /g' "$i"

  # and add automatic ones
  sed -i 's/^.. code:: cpp$/&\n  :number-lines:/' "$i"
done

# RST -> HTML
rst2html tango.rst tango.html

# RST -> PDF
rst2latex tango.rst tango-from-rst.tex
latexmk --norc --dvi -latexoption="-shell-esc" tango-from-rst.tex
dvipdf tango-from-rst.dvi
