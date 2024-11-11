#include <iostream>
using namespace std;

int main()
{
    string a;
    // concatenation

    string fname = "Welcome";
    string lname = "to new world!";
    cout << fname + "" + lname << endl;

    a = fname.append(lname);
    cout << a << endl;

    // indexing
    string name = "helo xyz";
    cout << name[7];

    name[3] = 'i';
    cout << name;
}