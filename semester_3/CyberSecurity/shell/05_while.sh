#!/bin/sh

a=0

while [ $a -lt 10 ]
do
	echo "Looping...  $a"
	a=$(($a + 1))
done
