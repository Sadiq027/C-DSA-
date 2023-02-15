#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int  m = n;
    while(1){
        switch(m){
            case 1 : cout<<"First";
            break;
            case 2 : cout<<"Second";
            break; 
            case 3 : cout<<"Third";
            exit(0); // ====> To exit from infinite Loop
            break;
        };
    }
}