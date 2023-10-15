for i in range(2):
	unm = input("Enter the user name: ")
	pas = input("Enter the password: ")

	# hash for string
	a = hash(pas)
	print("Username: ", unm)
	print("hash value of password: ", a)
	f = open("21_pwd.txt", "a+")
	f.write("%s" %(unm))
	f.write("%s\n" %(a))
	f.close()

