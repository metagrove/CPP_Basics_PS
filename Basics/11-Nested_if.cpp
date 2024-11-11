#include<iostream>
using namespace std; // 

main()
{     
    int age;
    int a;
    string b;
    cout<<"Enter the age : ";
    cin>>a;
    
    if(age>=18){
        cout<<"male or female:";
        cin>>b;

        if(b =="Male" ||b =="male"){
            cout<<"room 5";
        }
        else if(b =="Female" || b== "female"){
            cout<<"room-6";
        }
        else{
            cout<<"not elegible";
        }

}
  return 0;                             
}

