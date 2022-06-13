n = int(input())
x = 0
for i in range(0,n):
    y=input().split()
    bok=int(y[0])
    cap=int(y[1])
    if (cap-bok)>=2:
        x+=1
print(x)