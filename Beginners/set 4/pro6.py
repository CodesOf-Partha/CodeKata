a = input()
a=a.replace(" ","")
a = list(a)
count = 0
for i in range(0,len(a)):
    if a[i].isalpha():
        continue
    elif a[i].isdigit():
        continue
    else:
        count +=1
print(count)
