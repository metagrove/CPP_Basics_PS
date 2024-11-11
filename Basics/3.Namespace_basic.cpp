#include <iostream>
using namespace std;

namespace name1{
    string name = "Bot1";
    int target = 123;
}

namespace name2{
    string name = "Bot2";
}

using namespace name1;
int main(){
    cout<<"same variable & values can be initalize using namespace "<< name1 ::name;
    cout<<"\nsame variable & values can be initalize using namespace "<< name2 ::name;
    cout<<"\n"<<target;
    return 0;
}