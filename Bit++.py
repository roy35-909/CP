a  = int(input())
count = 0
for i in range(0,a):
    x = input()
    if "++" in x:
        count+=1
    elif "--"in x:
        count-=1
print(count)