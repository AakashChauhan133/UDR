'''
	Author	:	Aakash Chauhan
	Date	:	September 12, 2023
	Execution time calculation
'''

import time

start = time.time()
def func(x, i):
	if i == 0:
		return;
	func(x, i - 1)
	print(x," * ", i, " = " ,i * x)

func(2, 10)

end = time.time()

tm = end - start

print("Exicution time is ", tm)
