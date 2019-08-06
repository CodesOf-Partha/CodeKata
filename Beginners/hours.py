a = int(input())
hours = a/60
if(a%60==0):
    print(int(hours))
else:
    print(str(int(hours))+" "+str(a%60))
