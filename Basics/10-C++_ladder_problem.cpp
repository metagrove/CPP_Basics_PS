#include<iostream>
using namespace std;
int main(){
    int a,c;
    double b;
  cout<<"Enter the hardness of the steel: ";
  cin>>a;
  cout<<"Carbon content : ";
  cin>>b;
  cout<<"Tensile strength : ";
  cin>>c;

  if (a>=50 && b>=0.7 && c>=5600){
    cout<<"Grade 10";
  }
  else if(a>=50 && b>=0.7){
    cout<<"Grade 9";
  }
  else if(b>=0.7 && c>=5600){
    cout<<"Grade 8";
  }
  else if(a>=50 && c>=5600 ){
    cout<<"Grade 7";
  }
  else if(a>=50 || b>=0.7 || c>=5600){
    cout<<"Grade 6"<<endl;
  }
  else{
    cout<<"Grade 5";
  }

cout<<"[*] ---------End of statement -----------[*]";
return 0;
}
