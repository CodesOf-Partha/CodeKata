num=int(input())
flag=False
for i in range(0,100):
  if 2**i == num:
    print('yes')
    flag=False
    break;
  else:
    flag=True
if(flag==True):
  print('no')
