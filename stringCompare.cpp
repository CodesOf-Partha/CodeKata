#include <iostream>
#include <string>
using namespace std;
int main() {
	string str1,str2;
	int max,len1,len2,i,count=0;
	cin>>str1>>str2;
	len1=str1.length();
	len2=str2.length();
	if(str1==str2){
		cout<<"0";
		return 0;
	}
	if(len2>len1){
		for(i=0;i<len2;i++){
			if(str1[i]!=str2[i]){
				count+=1;
			}
		}
	}else if(len1>len2){
		if(len2==1){
			for(i=0;i<len1;i++){
				if(str1[i]==str2[0])
				count-=1;
			}
		}
		
		for(i=0;i<len1;i++){
			if(str1[i]!=str2[i]){
				count+=1;
			}	
		}
	}
	cout<<count;
	return 0;
}