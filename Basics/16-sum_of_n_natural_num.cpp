#include<iostream>
using namespace std;
int main(){
    int n,i,j=0;
    cout<<"Enter the limmit : ";
    cin>>n;
    for(i=1;i<=n;i++){
        j = j+i;        
    }
    cout<<j;
    return 0;
}