#include<iostream>

using namespace std;

int main(){
    int i=0;

    // cout<<"enter the number : ";
    // cin>>n;

    // for(i=1;i<=10;i++){
    //     cout<<n<<"x"<<i<<"= "<<i*n<<endl;

    // }

//----------------while loop------------------------------

    //int a[] = {1,2,3,4,5,6,7,8,9};
    char a[] = {1,2,3,4,5,6,7,8,9};

    // while(i<=9){
    //     cout<<a[i]<<endl;
    //     i++;
    // }

//----------------for  loop------------------------------

    // for(i=0;i<=9;i++){
    //     cout<<a[i]<<endl;
    // }

//----------------for each ------------------------------
    
    for(auto x :a){
        cout<<a[x]<<endl;
    }

return 0;

}