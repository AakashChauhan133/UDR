'''
	Author	:	Aakash Chauhan
	Date	:	September 12, 2023
	Basic list
'''

thislist = ["apple", "mango", "banana"]
print("This list: ", thislist)

thislist.remove("apple")


print("after remove: ", thislist)
thislist.append("cherry")
print("After appending: ", thislist)

del thislist[1]
print("After del: ", thislist)
thislist.insert(1, 'banana')
print("After adding: ", thislist)
thislist.insert(10, "faltu")
print(thislist)
