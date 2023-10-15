#!/bin/sh

read -p "Enter the value: " a

if [ $a -eq 10 ]
then
	echo "It is 10"

elif [ $a -eq 20 ]
then
	echo "It is 20"

else
	echo "Not known"
fi
