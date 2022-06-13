s = int(input())
maximum=[]
intrain = 0
for i in range(0,s):
    k = input().split()
    intrain = intrain-int(k[0])
    intrain = intrain+int(k[1])
    maximum.append(intrain)
maximum.sort()
x = maximum[len(maximum)-1]
print(x)
