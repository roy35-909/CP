participant, Finalscor = input().split()
scor = []
inputscor =[]
inputscor = input().split()
for i in inputscor:
    scor.append(int(i))
scor.sort(reverse=True)
nextround = []
cutscor = scor[int(Finalscor)-1]
for k in scor:
    if (k>=cutscor) & (k!=0):
        nextround.append(k)


print(len(nextround))