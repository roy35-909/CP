a= input()
cap = a[0].capitalize()
word = ""
word = word+cap
for i in range(1, len(a)):
    word = word+a[i]
print(word)
