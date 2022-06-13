x = input()
lucky = 0
for i in x:
    if (i=="7")or(i=="4"):
        lucky+=1
if (lucky==4)or(lucky==7):
    print("YES")
else:
    print("NO")