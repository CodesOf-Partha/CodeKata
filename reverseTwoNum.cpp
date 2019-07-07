#include <iostream>
using namespace std;

int main() {
	int num,i=0,val1,val2,j=0,result=0,result1=0,temp;
	cout<<"Enter a number: ";
	cin>>num;
	while(num!=0){
		val1=num%10;
		num/=10;
		val2=num%10;
		num/=10;
		j+=2;
		if(j==2){
			result=(val1*10)+val2;
		}else{
			for(i=0;i<2;i++){
				result*=10;
			}
			result=result+(val1*10)+val2;
		}
		
	}
	temp=result;
	j=0;
	while(temp!=0){
		val1=temp%10;
		temp/=10;
		val2=temp%10;
		temp/=10;
		j+=2;
		if(j==2){
			result1=(val2*10)+val1;
		}else{
			for(i=0;i<2;i++){
				result1*=10;
			}
			result1=result1+(val2*10)+val1;
		}
	}
	cout<<"\nThe answer is "<<result1;
	return 0;
}