words = []
n = int(input())
for i in range(0,n):
    x = str(input())
    if len(x)>10:
        y = 0
        first = ""
        last = ""
        lenth = len(x)-2
        for i in x:
            y+=1
            if (y==1) | (y==(len(x))):
                if y==1:
                    first=i
                else:
                    last = i

        word = f"{first}{lenth}{last}"
        words.append(word)
    else:
        words.append(x)

for i in words:
    print(i)
