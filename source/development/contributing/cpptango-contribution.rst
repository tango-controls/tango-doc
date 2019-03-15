How to contribute to Tango Controls C++ library (cppTango)
==========================================================

:audience:`developers`

Everyone is welcome to contribute to cppTango project.
If you don't feel comfortable with writing core cppTango we are looking for contributors to documentation or/and tests.

Workflow
--------

* Fork tango-controls/cppTango repository
* Clone fork
* If you want to work on TANGO 9 LTS, switch to tango-9-lts branch if needed: ``git checkout tango-9-lts``
* Add remote: ``git remote add upstream git@github.com:tango-controls/cppTango.git``
* Start a new branch for your contribution and switch to the new branch ``git checkout -b my-contrib``
* Reset your new branch to align it with upstream/tango-9-lts branch:
  * ``git fetch upstream``
  * ``git reset --hard upstream/tango-9-lts``
* Implement your changes:

  1. increment version (patch or minor)
  2. update RELEASE_NOTES.md - add reasonable description of the changes
  3. implement changes
* Commit and push
* Before submitting a new pull request:

  * ``git fetch upstream``
  * ``git rebase upstream/tango-9-lts``
OR

  * ``git pull --rebase upstream/tango-9-lts``
* Create pull request

* Pull requests should be ALWAYS made to tango-9-lts branch, not to a master branch, unless they are related to Tango V10 development.
* You can have a look at `GitHub Standard Fork & Pull Request Workflow gist <https://gist.github.com/Chaser324/ce0505fbed06b947d962>`_ to get more details on how to fork and submit a Pull Request:

PLEASE PROVIDE TEST CASES WHEN RELEVANT FOR YOUR CONTRIBUTION

reStructuredText and Sphinx
---------------------------

Documentation is written in reStructuredText_ and built with Sphinx_ - it's easy to contribute.
Please refer to :ref:`documentation-guide` for more details on how to contribute to the documentation.

Releasing a new version
-----------------------

From time to time a new version should be released.  Anyone who wishes to see some
features of the tango-9-lts branch released is free to make a new release.  The basic
steps required are as follows:

Pick a version number
  * Semantic version numbering is used:  <major>.<minor>.<patch>
  * Major version number is systematically increased when there is a new version of the TANGO IDL.

Create an issue in Github
  * This is to inform the community that a release is planned.
  * Use a checklist similar to the one below:

  ::

    Task list:
    - [ ] Read steps in the ["Releasing a new version" documentation](https://tango-controls.readthedocs.io/en/latest/development/contributing/cpptango-contribution.html#releasing-a-new-version) for making a release
    - [ ] Bump the version (if not already done) on tango-9-lts branch
    - [ ] Merge the wished Pull Requests into tango-9-lts (Make sure Travis and appveyor are OK on the PR before the merge)
    - [ ] Make sure Travis and appveyor are OK on tango-9-lts branch
    - [ ] Edit the CHANGELOG.md file
    - [ ] Edit the RELEASE_NOTES file
    - [ ] Make sure the documentation is updated (readthedocs)
    - [ ] Create a release tag on GitHub, from tango-9-lts branch. Flag it as a pre-release.
    - [ ] Advertise the pre-release on the mailing list to ask for feedback and testers
    - [ ] Wait for at least 2 weeks before to do the next steps to give some time to get feedback from the first testers
    - [ ] If no major bug was reported, the GitHub release can be flagged as "Latest release",
    else the bugs should be fixed first and a new pre-release should be created.
    - [ ] Add Windows installers as assets to the GitHub release
    - [ ] Generate Doxygen documentation for this new release and update cppTango-docs with the new generated documentation
    - [ ] Update cppTango version in TangoSourceDistribution repository
    - [ ] Advertise the release as the new stable release on the mailing list and on the tango-controls website (News)
    - [ ] Close this issue

  * A check list in this form on github can be ticked off as the work progresses.

Bump the version on tango-9-lts branch
  * Update the following lines at the beginning of CMakeLists.txt to match the new release number
  * For cppTango 9.3.3, you will get:
  ::

    #need to define the version of the library
    set(MAJOR_VERSION "9")
    set(MINOR_VERSION "3")
    set(PATCH_VERSION "3")

Merge the wished Pull Requests
  * Create/Review/Merge the Pull Requests containing the bug fixes and new features you would like to see in the new
    release. Do this with the help/review of the cppTango developers team.
  * Before merging a Pull Request into tango-9-lts branch:

     * Travis and appveyor tests must pass on this Pull Request
     * the Pull Request must have been approved by a member of the cppTango developers team
       (different than the Pull Request creator)

Make sure Travis and appveyor are OK on tango-9-lts branch
  * Once the Pull Requests have been merged on tango-9-lts, make sure that Travis and appveyor builds are still OK on
    that branch.
    If not, bad luck - you'll have to fix it first and go back a few steps...

Edit the changelog
  * Create a Pull Request to edit CHANGELOG.md file.
  * List all the Pull Requests which have been merged since the last release in this CHANGELOG.md file.
  * Get these changes reviewed before proceeding.

Edit the release notes
  * Create a Pull Request to edit RELEASE_NOTES.md file.
  * We took the slack release notes as inspiration for the first cppTango 9.3 release notes.
    According to slack team::

   *They should take the basic facts, reduce jargon, put them into words people could relate to; words that might be
   lightly poetic and slightly absurd, but stopped short of grating, and…nothing less than informative.*

  * You can refer to `slack: a little thing about release notes <https://slackhq.com/a-little-thing-about-release-notes>`_ for more details.
  * Get these changes reviewed before proceeding.

Make sure the documentation is updated (readthedocs)
  * If needed, update the documentation which is on `readthedocs <https://tango-controls.readthedocs.io>`_
  * Please refer to :ref:`documentation-guide` for more details on how to contribute to the documentation.

Create a release tag on GitHub, from tango-9-lts branch. Flag it as a pre-release.
  * Go to `GitHub cppTango releases page <https://github.com/tango-controls/cppTango/releases>`_ and click on ``Draft a new release``
  * Create a tag for the new version from tango-9-lts target and and prefix the tag name with the letter v.
    If the tag isn't meant for production use, add a pre-release version after the version name.
    For instance, v9.3.3-rc1
  * Copy/paste the release notes from RELEASE_NOTES.md for this version in the release description
  * Flag this version as pre-release by ticking the checkbox

Advertise the pre-release
  * Advertise the pre-release on the tango mailing list
  * Eventually submit a news on `tango-controls web site <http://www.tango-controls.org>`_ to ask for feedback and testers

Wait for at least 2 weeks before to do the next steps
  * This is to give some time to get some feedback from the first testers

After at least 2 weeks
  * If no major bug was reported, the GitHub release can be flagged as "Latest release".
    If a pre-release version tag was used before (like v9.3.3-rc1), you should create a new tag corresponding to the
    same software version but with a name corresponding to a stable release (e.g. v9.3.3).
    Be careful if some new Pull Requests got merged into tango-9-lts branch in the meantime.
    What you want is to use a tag which corresponds to the version which has been tested successfully during the
    previous weeks.
  * Else the major bugs should be fixed first and a new pre-release/release candidate should be created before to proceed
    with the final steps.

Add Windows installers as assets to the GitHub release
  * Since appveyor artifacts are only kept for 6 months, provide Windows installers generated by the appveyor build
    of the release as assets of this new GitHub release so they are always available from
    the `GitHub cppTango releases page <https://github.com/tango-controls/cppTango/releases>`_.

Generate Doxygen documentation
  * for this new release and update cppTango-docs with the new generated documentation

Update cppTango version in TangoSourceDistribution repository
  * If a stable release has been created, update tango-controls/TangoSourceDistribution distribution.properties file
  * In particular, the following variables must be updated:

    * cppTango - e.g. ``cppTango=v9.3.3``
    * version-info - version_info must be computed depending on the cppTango library version using the following formula::

       #VERSION_INFO = current:revision:age
       # where
       #current = tango lib major + $age
       #revision = tango lib patch
       #age = tango lib minor.

      So for tango 9.3.2 it would be::

       #current = 9 + 3 = 12
       #revision = 2
       #age = 3
       version-info=12.2.3

    The above formula must be used to compute version-info property to ensure the installed libtango shared library file will contain the cppTango release version in its name.

Advertise the release as the new stable release
  * Advertise the release on the tango mailing list
  * Submit a release news on `tango-controls web site <http://www.tango-controls.org>`_

Close off release issue
  * All the items on the check list should be ticked off by now.
  * Close the issue.
