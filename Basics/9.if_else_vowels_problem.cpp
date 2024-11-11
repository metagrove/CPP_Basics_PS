#include<iostream>
using namespace std;

int main(){ //AEIOU - aeiou
   char Chr;
   cout<<"Enter the chara :";
   cin>>Chr;

   if(Chr =='a'|| Chr == 'e'||Chr =='i'||Chr == 'o'||Chr == 'u' ||
   Chr =='A'|| Chr == 'E'||Chr =='I'||Chr == 'O'||Chr == 'U'){
        cout<<"Its an vowel"<<endl;
   }  
   else{
    cout<<"Its not a vowel!";
   } 
   return 0;
}



