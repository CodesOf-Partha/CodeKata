#include <iostream>
#include <string>
using namespace std;

int main() {
	int t,k,len,i,j,arr[10];
	string str;
	cin>>t;
	while(t!=0){
		cin>>k;
		cin>>str;
		len=str.length();
		for(i=0;i<len;i++){
			if(str[i]>=48&&str[i]<=57){
				arr[i]=str[i]-48;
			}else{
				while(j<len){
					j=0;
					if((arr[i-1]!=j||arr[i-1]==arr[-1])&&str[i+1]-48!=j){
						arr[i]=j;
						break;
						
					}
					else
					{
						if(str[i+1]-48==j+1&&j+2<=len)
						{
							arr[i]=j+2;
							break;
						}
						else{
							arr[i]=j+1;
							break;
						}
					}
					j++;
					
				}
				if(arr[0]==arr[len-1]){
					if(arr[len-2]==arr[0]){
						arr[len-2]+=1;
					}else{
						arr[len-1]+=2;
					}
				}
			}
		}
		if(len!=1){
			if(arr[0]!=arr[len-1]){
			for(i=0;i<len;i++)
				cout<<arr[i];
			cout<<"\n";
		 }else
		 cout<<"No"<<"\n";
		}
		else
			cout<<"0"<<"\n";
		t-=1;
	}
	return 0;
}