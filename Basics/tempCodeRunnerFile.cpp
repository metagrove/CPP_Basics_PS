#include <iostream>
using namespace std;
int main(){
  int i,j,z=0,n;
  for(i =1;i<=100;i++){

    for(j=1;j<=i;j++){
      if(n%i==0){
        z++;
      }
      if(z==2){
        cout<<n<<"prime";
      }
      z=0;
    }
  }
}