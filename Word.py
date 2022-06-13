s = input()
upper = 0
lower = 0
for i in s:
    if i.isupper():
        upper+=1
    elif i.islower():
        lower +=1
    else:
        break
if upper>lower:
    print(s.upper())
else:
    print(s.lower())