def distance(x, y):
    if x >= y:
        result = x - y
    else:
        result = y - x
    return result
matrix = []
for i in range(0,5):

    r = input().split()
    matrix.append(r)
for i in matrix:
    if "1" in i:
        x = i.index("1")
        y = matrix.index(i)
        count = distance(x+1,3) + distance(y+1,3)
        print(count)

