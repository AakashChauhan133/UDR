#!/bin/bash

echo "Enter the value: "
read a

fact=1

while [ $a -gt 1 ] 
do
	fact=$((a*fact))
	a=$((a-1))
done

echo $fact
