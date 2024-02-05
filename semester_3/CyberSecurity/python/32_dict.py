dict = {'one': 1, 'two': 2, 'three': 3}

print(dict)
print(dict['one'])

dict.update({'four':4, 'five':5})
print(dict)

del dict['five']
print(dict)

print(dict.items())

keyss = list(dict.keys())
keyss.sort()

for i in keyss:
	print(": ".join((i,str(dict[i]))))


print(len(dict))
