#!/bin/bash

read -p "Enter the number: " n

for ((i = 1; i <= 10; i++))
do
	echo "$n * $i = $((i*n))"
done

