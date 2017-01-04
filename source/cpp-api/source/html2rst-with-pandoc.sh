find . -name "*.ht*" | while read i; do pandoc -S -f html -t rst "$i" -o "${i%.*}.rst"; done
