// #include<iostream>

// using namespace std;

//-------------------Method-1 --------------

// int main(){
//     int a,b,c,x,y,sum=0;
//     cout<<"Enter the value:";
//     cin>>a;

// b = a%10;
// x = a/10;

// c = b%10;
// y = x/10;

// sum = (y*y*y)+(b*b*b)+(c*c*c);

// if(sum == a){
//     cout<<"armstrong";
// }else{
//     cout<<"not armstrong";
// }

//------------------Method-2------------------

// #include <iostream>
// using namespace std;
// int main() {
//   int a, s1, s3,sum =0;
//   cout << " Enter the value : ";
//   cin >> a; // a=153
//   s3=a;

//   while(a>0){
//     s1 = a%10; // 3 5 1
//     sum = sum+(s1*s1*s1);
//     a = a/10; // 15 1 0
//   }

//   if (s3==sum) {
//     cout << "armstrong";
//   }
//   else {
//     cout << "not armstrong"<<endl;
//   }
// return 0;
// }

//------------------Method-3---------------------

#include <iostream>

using namespace std;

int main()
{
    int sum = 0, a, n;

    for (int i = 100; i <= 999; i++)
    {
        n = i;
        while (n > 0)
        {
            a = n % 10;
            sum = sum + (a * a * a);
            n = n / 10;
        }
        if (sum == i)
        {
            cout << "armstrong" << i << endl;
        }
        sum = 0;
    }
    return 0;
}
