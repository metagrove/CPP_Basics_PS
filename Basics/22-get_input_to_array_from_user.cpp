// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int a[100], n, x;
    cout << "Enter the values:";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the number to search";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            cout << "value found";
            return 0;
        }
    }
    cout << "No found";
    return 0;
}