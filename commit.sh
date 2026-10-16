#!/bin/bash

# $1 is the commit comment.

if [[ !(-e ./log.txt) ]]
then
    touch "log.txt"
fi

(git add . > ./log.txt) &&
(git commit -m "$1") &&
(git push) > ./log.txt