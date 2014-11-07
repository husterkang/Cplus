#!/bin/bash

git remote remove origin
git remote add origin git@github.com:husterkang/Cplus.git
git add ./*

name=`date`
git commit -m "$name"
git push origin master
