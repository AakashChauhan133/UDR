#!/bin/bash

echo "Enter the value: "
read a

fact=1;

for ((i = 1; i <= a; i++))
do
	fact=$((i*fact))	
done

echo $fact

