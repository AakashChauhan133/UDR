'''
   Name: Aakash
   University Roll No: 2021931
   Section: M
   Write a program in Python. A library charges a fine for every book returned late. For First 5 days the fine is 50 paisa/day, for 6-10 days fine is one rupee/day and above 10 daysfine  is 5 Rupees/ per day. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.
'''


print("\n/********* INPUT *********/\n")
days = int(
    input("Enter the number of days the member is late to return the book\n"))


print("\n/********* OUTPUT *********/\n")
if (days >= 1 and days <= 5):
    fine = days * 0.5
    print(fine)
elif (days >= 6 and days <= 10):
    fine = (5 * 0.5) + (days - 5) * 1
    print(fine)
elif (days > 10 and days < 30):
    fine = (5 * 0.5) + (5 * 1) + (days - 10) * 5
    print(fine)
elif (days >= 30):
    print("Membership cancelled")
