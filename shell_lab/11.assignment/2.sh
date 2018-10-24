#!/bin/bash
# sed -e  's/the/THIS/g' -e 's/THE/THIS/g' -e 's/The/THIS/g' 2.txt
sed -e 's/the/THIS/gI' 2.txt # I ignore case of alphabets
