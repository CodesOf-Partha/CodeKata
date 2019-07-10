#include <iostream>
#include <string>
using namespace std;
int main() {
	string str,temp=""; int num,i,j,len,len1;
	cin>>str>>num;
	len=str.length();
	for(i=0;i<len-num+1;i++){
		for(j=i;j<i+num;j++){
			temp+=str[j];
		}
		temp+=" ";
	}
	len1=temp.length();
	for(i=0;i<len1-1;i++){
		cout<<temp[i];
	}
	return 0;
}