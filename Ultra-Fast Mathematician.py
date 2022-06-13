x = str(input())
y = str(input())
a = ''
for i in range(0,len(x)):
    if x[i]!=y[i]:
        a = a+'1'
    else:
        a = a+'0'

print(a)
