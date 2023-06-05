#!/bin/zsh

filename="$1"

if [ ${#filename} -gt 1 ]; then
    gcc $filename -o program && ./program

else
    echo "enter a valid file name"
fi