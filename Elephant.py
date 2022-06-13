def distance(x, y):
    if x >= y:
        result = x - y
    else:
        result = y - x
    return result
steps = 0
x = int(input())
while x>0:
    if x>=5:
        x-=5
        steps+=1
    else:
        x-=distance(x,0)
        steps+=1
print(steps)
