unm = input("Enter the user name: ")
pas = input("Enter the password: ")

# hash for string
a = hash(pas)
print("Username: ", unm)
print("hash value of password: ", a)
f = open("20_pwd.txt", "w+")
f.write("%s" %(unm))
f.write("%s" %(a))
f.close()
