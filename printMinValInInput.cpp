#include <iostream>
#include <string>
using namespace std;

int main() {
	string str="";
	int num,min=0,n,i,len=0;
	cin>>n;
	int arr[n];
	cin>>num;
	min=num;
	str+=to_string(num)+" ";
	for(i=1;i<n;i++){
		cin>>num;
	    if(num<min){
	  		min=num;
	    }
		str+=to_string(min)+" ";
	}
	len=str.length();
	for(i=0;i<len-1;i++)
		cout<<str[i];
	return 0;
}