

w = int(input())

if w==1:
    print("NO")
else:
    for i in range(1,w):
        y = w-i
        if (y%2==0) & (i%2==0):

            print("YES")
            break
        else:
            if i ==w-1:
                print("NO")




