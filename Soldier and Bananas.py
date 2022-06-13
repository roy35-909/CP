def distance(x, y):
    if x >= y:
        result = x - y
    else:
        result = y - x
    return result
s = input().split()
k = int(s[0])
n = int(s[1])
w = int(s[2])
for i in range(1,w+1):
    n = n-(k*i)
if n>=0:
    print(0)
else:
    x = distance(0,n)
    print(x)