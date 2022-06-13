s = input()
x = []
for i in s:
    if i in x:
        continue
    else:
        x.append(i)

if len(x)%2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")