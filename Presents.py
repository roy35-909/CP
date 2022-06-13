x = int(input())
present=input().split()
arr = []
for i in range(1,x+1):
    arr.append(int(present.index(str(i)))+1)
print(f"{' '.join(str(val) for val in arr)}")