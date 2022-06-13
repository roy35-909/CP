x= int(input())
s=0
if x%2==0:
    s = x/2
else:
    x+=1
    s = -x/2
print(int(s))
