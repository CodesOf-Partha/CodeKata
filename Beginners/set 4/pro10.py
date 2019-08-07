n = int(input())
a = 0
b = 1
if n<0:
    print("Incorrect number")
elif n == 0:
    print(0)
elif n == 1:
    print(1)
else:
    for i in range(2,n):
        c = a+b
        a=b
        b=c
        print(b)
