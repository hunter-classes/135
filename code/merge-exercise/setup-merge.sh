#!/bin/bash
yes | rm -r .git
git init
touch samplefile
git add samplefile
echo "echo Hello" > samplefile
git commit -am 'initial'
git checkout -b newbranch
echo "echo \"Hello World\"" > samplefile
git commit -am 'first commit on new_branch'
git checkout master
echo "echo \"Hello World!\"" > samplefile
git commit -am 'second commit on master'
#git merge newbranch
cat >> samplefile <<EOF
hello hello
EOF
git commit -am "third commit newbranch"
git checkout master
cat >> samplefile <<EOF
 worddddddddd
EOF
git commit -am "third commit newbranch"


