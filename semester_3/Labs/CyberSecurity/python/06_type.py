''' 
	Author	: 	Aakash Chauhan
	Date	:	August 29, 2023
	Program	:	Explicit type casting
'''

num_int = 123
num_str = "456"

print("Type of num_str before type casting: ", type(num_str))

num_str = int(num_str)
print("Type of num_str after type casting: ", type(num_str))

sum = num_str + num_int
print("Sum = ", sum)
print("Type of sum is: ", type(sum))
