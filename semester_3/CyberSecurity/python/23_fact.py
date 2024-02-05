'''
	Author	:	Aakash Chauhan
	Date	:	September 12, 2023
	Factorial using recussion
'''

def fact(x):
	if x == 1:
		return 1
	return (x * fact(x - 1))

a = int(input("Enter the value: "))
print("The factorial is ", fact(a))
