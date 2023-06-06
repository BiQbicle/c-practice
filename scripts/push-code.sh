#!/bin/zsh

msg="$1"

if [ ${#msg} -lt 1 ]; then
    echo "Enter a valid commit message"
fi

echo "$msg"

 git add .
 git commit -am "$msg"
 git push origin main