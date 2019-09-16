#include <iostream>
using namespace std;

int main() {
	 int i,j,r,d=0,n;
	 cin>>n;
    for(i=0;i<n;i++)
    {
        r=n*(i+1);
        d=r-n+1;
        if(i%2==0)
        {
            for(j=n-1;j>=0;j--)
                cout<<d++<<" ";
        }
       else
        {
            for(j=0;j<n;j++)
                cout<<r--<<" ";
        }
        cout<<"\n";
    }
	return 0;
}