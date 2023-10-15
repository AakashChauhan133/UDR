pw = input("Enter the password: ")

print("Entered password: " + pw)

hash_pwd = hash(pw)
print("Hash of the password is:", end = " ")
print(hash_pwd)
