drinks=int(input())
percent=input().split()
sum = 0
for i in percent:
    sum = sum+ int(i)/100
ans = sum/drinks
print(ans*100)
