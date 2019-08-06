n=int(input())
list2=[]
list2=input().split()
list2.sort()
string=""
for i in list2:
    string+=str(i)+" "
print(string.strip())