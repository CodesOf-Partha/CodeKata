#include <iostream>
using namespace std;
int main() {
  string name,name2;
  bool boo=false;
  cin>>name;
  cin>>name2;
  if(name.length()!=name2.length()){
    if(name.length()>name2.length()){
      cout<<name<<endl;
    }
  }
  else{
    for(int i=0;i<name.length();i++){
      if(name[i]==name2[i]){
        boo=true;
      }
      else{
        boo=false;
        cout<<name<<endl;
        break;
      }
    }
    if(boo==true){
      if(name[0]>name2[0]){
        cout<<name<<endl;
      }
      else{
        cout<<name2<<endl;
      }
    }
  }  
}
