#include <iostream>
using namespace std;

int main()
{
    // int a,b; // initialize input variables
    // float a,b;

    // char a;
    string a;
    //-----------------------------------
    // cout<<"[*]Enter the number a and b :1";
    // cin >>a; //input using cin
    // cin >>b;
    // cout <<"\n[*]value is : "<<a+b; //insertion operator << addition of two numbers

    //-- character input---
    // cin>>a;
    // cout<<"helo "<<a;

    // -- String input --
    // cin>>a;
    // cout<<"helo "+a;

    // -- to get line as a input --
    getline(cin, a);
    cout << a;

    return 0;
}