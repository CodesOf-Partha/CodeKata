a = input()
a = a.split()
count = 0
for item in a:
    count = count + len(item)
print(count)