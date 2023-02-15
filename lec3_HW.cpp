#include<iostream>
using namespace std;

int main(){
    char ch = 'k';
    if (ch>=97 && ch<=122)
    {
        cout<<"this is lowercase"<< endl;
    }
    else if(ch>=65 && ch<=90){
        cout<< "Char is uppercase"<< endl;
    }else if(ch>=0 && ch<=9){
        cout<<"Char is numeric"<< endl;
    }else{
        cout<<"ch is special character"<<endl;
    }
    
}