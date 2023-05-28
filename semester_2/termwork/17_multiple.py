'''
   Name: Aakash
   University Roll No: 2021931
   Section: M
    Write a Python program that iterates the integers from 1 to 50. For multiples of three print "3multiple" instead of the number and for multiples of five print "5multiple ". For numbers that are multiples of three and five, print "multipleof3and4 ".
'''


print("\n/********* OUTPUT *********/\n")
for i in range (1, 51):
    if ((i % 3 == 0) and (i % 5 == 0)):
        print("multipleof3and4")
    elif ((i % 3 == 0)):
        print("3multiple")
    elif ((i % 5 == 0)):
        print("5multiple")
    else:
        print(i)