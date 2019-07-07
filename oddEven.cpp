#include <iostream>
using namespace std;

int reverse(int num){
	int i=0,j=0;
		while(num!=0){
			i=num%10;
			j*=10;
			j+=i;
			num/=10;
		}
		return j;
	}

int main() {
int num, numOdd=0, numEven=0,temp=0,val,i,result=0;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<num;
	while(num!=0){
		val=num%10;
		if(val%2==0){
			numEven*=10;
			numEven+=val;
			temp+=1;
		}else{
			numOdd*=10;
			numOdd+=val;
		}
		num=num/10;
	}
	numOdd=reverse(numOdd);
	for(i=0;i<temp;i++){
		numOdd*=10;
	}
	numEven = reverse(numEven);
	result=numOdd+numEven;
	cout<<"\nThe pattern is "<<result;
	return 0;
}