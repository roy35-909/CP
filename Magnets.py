x= int(input())
arr = []
count=0
for i in range(0,x):
    arr.append(input())
for i in range(0,x):
    if i==(x-1):
        break
    else:
        if arr[i]==arr[i+1]:
            pass
        else:
            count+=1
print(count+1)