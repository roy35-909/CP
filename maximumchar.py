def duplicate_letter(word,letter):
    count = 0
    for i in word:
        if i==letter:
            count+=1
    return count
words=[]
w = input()
maximun = 0;
for j in w:
    if maximun<(duplicate_letter(w,j)):
        maximun=duplicate_letter(w,j)
    words.append({"word":j,"number":duplicate_letter(w,j)})
print(maximun)

print(words)
