#!/bin/bash

read -p "Enter number of lines: " n

k=0

for ((i = 0; i < n; i++))
do
	for ((j = 0; j<=$(((n/2) + k)); j++))
	do
		if [ j<=$(((n/2) - k)) ]
		then
			echo -n " "
		else
			echo -n "*"
		fi 
	done	
	
	k=$((k+1))
	echo ""
	
done
