'''
   Name: Aakash
   University Roll No: 2021931
   Section: M
   Write a python program to accept the cost price of a bike and display the road tax to be paid according to following criteria:
    >100000             15%
    >50000 and <=100000 10%
    <=50000             5%
'''

print("\n/********* INPUT *********/\n")
costPrice = float(input("Enter the cost price of the bike\n"))
tax = 0.0

if (costPrice > 100000):
    tax = costPrice * 0.15
elif (costPrice > 50000 and costPrice <= 100000):
    tax = costPrice * 0.10
elif (costPrice <= 50000):
    tax = costPrice * 0.05


print("\n/********* OUTPUT *********/\n")
print(tax)
