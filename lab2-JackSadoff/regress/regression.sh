#!/bin/bash

if [ $# -lt 2 ]; then #Check if there are enough arguments
 echo "There are not enough arguments ($#)"
 exit 1
fi


for i in "${@:2}" #start looping over each argument starting at the second
do
echo Testing $i
if [ !  -f "$i" ] #check if file exists
then
  echo "File $i does not exist"
  exit 3

fi

dirname=`date +"%Y%m%d.%H%M%S"` #set date as directory name

mkdir -p $dirname #create directory and generate files
cp $i "$dirname"/"$i".test
bash $i > "$dirname"/"$i".output
echo $? > "$dirname"/"$i".status

done

if [ -d "$1" ] #finally, check if dirname exists and if it does, compare
then
  echo "Directory $1 does exist, any differences are as follows:"
  diff -rq --brief $1 $dirname
else
 echo "Directory $1 does not exist"
 mkdir -p $1
 mv -T $dirname $1
fi

exit 0
