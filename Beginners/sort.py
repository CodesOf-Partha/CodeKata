n=int(input())
list1=[]
list1=input().split()
list1.sort()
string=""
for i in list1:
    string+=str(i)+" "
print(string.strip())