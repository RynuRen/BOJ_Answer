word = input()
for i in range(len(word)//2):
    if word[i] != word[len(word)-1-i]:
        print(0)
        break
else:
    print(1)