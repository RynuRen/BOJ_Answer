s = input()
vow = ("a", "e", "i", "o", "u")
filterd = [i for i in s if i in vow]
print(len(filterd))