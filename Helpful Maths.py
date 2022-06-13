a = input().split("+")
a.sort()
print(f"{'+'.join(str(val) for val in a)}")