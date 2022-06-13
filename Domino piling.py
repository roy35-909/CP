h, w = input().split()
width = int(w)
height = int(h)
count = 0
x = width*height
if (x%2==0):
    count = x/2
else:
    y = x -1
    count = y/2
print(int(count))