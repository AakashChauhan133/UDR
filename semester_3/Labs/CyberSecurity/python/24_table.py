'''
	Author	:	Aakash Chauhan
	Date	:	September 12, 2023
	Print table using recursion
'''

def table(x, i):
	if i == 0:
		return
	table(x, i - 1)
	print("x * ", i, " = " , x * i)
table(2, 10)
