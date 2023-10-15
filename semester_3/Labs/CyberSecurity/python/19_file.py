for i in range(10):
	f = open("file1.txt", "a+")
	f.write("This is line %d\r\n" % (i + 1))
	f.close()
