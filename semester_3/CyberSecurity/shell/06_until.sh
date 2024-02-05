#!/bin/sh

count=0
until [ $count -gt 5 ]
do
	echo counter: $count
	((count++))
done
