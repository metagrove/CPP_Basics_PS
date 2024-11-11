#include <iostream>
using namespace std;

int main() {
  int a[5]={10,20};
    int b[]={1,2,3,4,5};

//    for(int i =0;i<=5;i++){
//        cout<<a[i]<<endl;
//    }

    // for(int x:a){
    //     cout<<x<<endl;
    // }

    for(int i =0;i<=5;i++){
       cout<<b[i]<<endl;
   }
   
    cout<<sizeof(b)/sizeof(int);
    
    return 0;
}