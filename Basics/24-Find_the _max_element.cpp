// Online C++ compiler to run C++ program online
#include <iostream>
#include <list>
using namespace std;
int main()
{
    // int t;
    // int a[] = {10,2,3,52,5,3,1};
    // t= a[0];
    // for(int i=1;i<sizeof(a)/sizeof(a[0]);i++){
    //     if(t<a[i]){
    //         t=a[i];
    //     }
    // }
    // cout<<"size : "<<sizeof(a)/sizeof(a[0])<<endl;
    // cout<<"large value : "<< t;

    //----------------------------------------------

    int v,i;
    list<int> a = {10, 2, 3, 52, 5, 3, 1};
    int t = a[i];
    for (auto v : a)
    {
        if (t < a[i])
        {
            t = a[i];
        }
    }
    cout << v << endl;

    return 0;
}