a = input()
b = input()
x = len(a)
st = ""
for i in range(0,len(a)):
    st = st+a[x-1]
    x-=1
if st==b:
    print("YES")
else:
    print("NO")
