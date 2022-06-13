import string
l = string.ascii_lowercase
a = input().lower()
b = input().lower()
count = 0
for i in a:
   x = l.index(i)
   y = l.index(b[a.index(i)])
   if x>y:
       count = 1
       break
   elif x<y:
       count = -1
       break
   else:
       count = 0
print(count)