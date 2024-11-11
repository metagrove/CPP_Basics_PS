#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the value : "<<endl;
    cin>>a>>b;
    
    if(a>b){
        cout<<"a is greater : "<<a<<endl;
    }
    else if(a==b){
        cout<<"a and b are equal "<<a<<" and "<<b<<endl;
    }
    else{
        cout<<"b is greater "<<b;
    }
    return 0;

}