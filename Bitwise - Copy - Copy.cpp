#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

// === BITWISE OPERATORS ===
    cout<<" a&b "<< (a&b) <<endl;
    cout<<" a|b "<< (a|b) <<endl;
    cout<<" ~a "<< (~a) <<endl;
    cout<<" a^b "<< (a^b) <<endl;

//  === LEFT SHIT & RIGHT SHIFT ===
    cout<< (17<<1)<<endl;
    cout<< (17<<2)<<endl;
    cout<< (18>>2)<<endl;
    cout<< (21>>2)<<endl;

//  === INCREMENT AND DECREMENT OPERATORS ===

    int i = 5 ;

    cout<< (i++)<< endl;//5 = 6
    cout<< (++i)<< endl;//6 = 7
    cout<< (i--)<< endl;//7 = 6 
    cout<< (--i)<< endl;//6 = 5


}