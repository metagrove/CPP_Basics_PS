#include<iostream>
using namespace std;

int main(){
    //1 2 5 10
    int a ,b,i;
    cout<<"Enter the number : ";
    cin>>a;

    for(i=1;i<=a;i++){ //1 2 3 4 5 6 7 8 9 10

      if(a%i==0){
        cout<<" prime factors "<<i<<endl;
       }

    }
    
}
