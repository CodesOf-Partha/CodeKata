#include <iostream>
using namespace std;
int main() {
  string name1,name2;
  bool flag=false;
  cin>>name1;
  cin>>name2;
  if(name1.length()!=name2.length()){
    if(name1.length()>name2.length()){
      cout<<name1<<endl;
    }
  }
  else{
    for(int i=0;i<name1.length();i++){
      if(name1[i]==name2[i]){
        flag=true;
      }
      else{
        flag=false;
        cout<<name1<<endl;
        break;
      }
    }
    if(flag==true){
      if(name1[0]>name2[0]){
        cout<<name1<<endl;
      }
      else{
        cout<<name2<<endl;
      }
    }
  }  
}
