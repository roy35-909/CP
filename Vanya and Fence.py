inpu = input().split()
inpu1 = input().split()
h = int(inpu[1])
x = 0
for i in inpu1:
    if int(i)>h:
        x+=2
    else:
        x+=1
print(x)

