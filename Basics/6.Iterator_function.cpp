#include<iostream>

using namespace std;

int main(){
    string str = "bot_1 initiate";
    string :: iterator itr;

    for(itr = str.begin();itr!=str.end();itr++){
        cout<<*itr<<endl;
    }

    // reverse iterator
    string :: reverse_iterator itr2;
    for(itr2 = str.rbegin();itr2!=str.rend();itr2++){
        cout<<*itr2<<endl;
    }
    return 0;
    
}