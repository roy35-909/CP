x = input().split()
Years = 0
one = int(x[0])
two = int(x[1])
if one==two:
    Years = 1
else:
    while True:
        if one>two:
            break
        one = one*3
        two = two*2
        Years+=1
print(Years)
