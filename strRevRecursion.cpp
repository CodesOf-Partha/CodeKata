#include <iostream>
#include <string>
using namespace std;
int i;
int strRe(char str, string copy){
	if(i!=0){
		cout<<str;
		strRe(copy[--i],copy);
	}
	else
	{
		cout<<str;	
		return 0;
	}
}
int main() {
	string str,copy;
	cout<<"Enter the string: ";
	getline(cin,str);
	copy=str;
	i=str.length();
	strRe(str[i],copy);
}