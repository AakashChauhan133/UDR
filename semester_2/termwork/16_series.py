'''
   Name: Aakash
   University Roll No: 2021931
   Section: M
   Write a Python program to find the sum of the following series:
    1 + 2^2/2! + 3^3/3! +  . . . + n^n/n!
'''


print("\n/********* INPUT *********/\n")
n = int(input("Enter the value of n: "))
fac = 1
sum = 0.0

for i in range(1, n + 1):
    fac = fac * i
    sum = sum + (i ** i) / fac
    
print("\n/********* OUTPUT *********/\n")
print(sum)