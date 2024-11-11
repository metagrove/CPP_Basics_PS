// Online C++ compiler to run C++ program online
#include <iostream>
#include <list>
using namespace std;
int main()
{
    // Write C++ code here
    // int sum=0;
    // int a[10] = {10,10,30};
    // for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++){
    //     sum = sum+a[i];
    // }
    // cout<<sum;

    list<int> num = {10, 10};
    int sum = 0;
    for (int x : num)
    {
        sum = sum + x;
    }
    int sizes = num.size();
    cout << "size of array : " << sizes;
    cout << "sum : " << sum;

    return 0;
}