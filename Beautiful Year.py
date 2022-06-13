def isDistinct(intt):
    n = str(intt)
    arr=[]
    result = True
    for i in n:
        for j in arr:
            if i==j:
                result= False
        arr.append(i)

    return result
x = int(input())+1
while isDistinct(x)==False:
    x+=1
print(x)