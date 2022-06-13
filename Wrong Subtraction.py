def is0inback(x):
    string = str(x)
    y = len(string)-1
    if string[y]=="0":
        return True
    else:
        return False
x = input().split()
number = int(x[0])
sub = int(x[1])
count = 0
while True:
    if is0inback(number):
        number = int(number/ 10)
        count+=1
    else:
        number-=1
        count+=1
    if count==sub:
        break
print(number)
