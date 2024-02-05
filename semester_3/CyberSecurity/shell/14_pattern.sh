#!/bin/bash

read -p "Enter the number of lines: " n

for ((i = 0; i < n; i++))
do
	for((j = 0; j < (n-i-1); j++))
	do
		echo -n " "
	done	
	for((j = 0; j <= (2*i); j++))
	do
		echo -n "*"
	done
	echo ""
done

