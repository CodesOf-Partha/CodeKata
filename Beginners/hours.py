val = int(input())
hour = val/60
if(val%60==0):
    print(int(hour))
else:
    print(str(int(hour))+" "+str(val%60))
