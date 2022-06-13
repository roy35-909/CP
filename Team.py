n = int(input())
count = 0
for i in range(0,n):
    line = input()
    inputs = []
    for i in line:
        if i==" ":
            continue
        else:
            inputs.append(i)

    a = int(inputs[0])
    b = int(inputs[1])
    c = int(inputs[2])
    if a+b+c >=2:
        count+=1

print(count)
