import os

a = input("Enter the keyword to find: ")
a = "ls | grep " + a

list = os.system(a)
