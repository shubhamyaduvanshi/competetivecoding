#!/bin/bash
ls -l > text.txt
sed -n '/rwx/p' text.txt
