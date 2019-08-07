numbers=input().split()
length=len(numbers)
for i in range(0,length):
  numbers[i]=int(numbers[i])
print(max(numbers))
