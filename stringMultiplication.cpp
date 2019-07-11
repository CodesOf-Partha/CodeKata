#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1,s2;
	int n1,n2,mul;
	cin>>s1>>s2;
	n1=stoi(s1);
	n2=stoi(s2);
	mul=n1*n2;
	cout<<mul;
	return 0;
}