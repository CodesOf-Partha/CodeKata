a,b=input().split()
a=int(a)
b=int(b)
a = a^b
b = a^b
a = b^a
print(str(a)+" "+str(b))
