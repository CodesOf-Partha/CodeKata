#include <iostream>
using namespace std;
int main() {
  int n,count=0;
  cin>>n;
  while(n>=1){
    n=n/10;
    count++;
  }
  cout<<count;
}
