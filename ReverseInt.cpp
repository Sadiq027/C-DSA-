#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the Number : ";
    cin>>n;

    int ans = 0;
    while(n!=0){
        int digit = n%10;
        ans = (ans*10)+digit;
        n = n/10;
        if( ans > pow(-2,31)|| ans < (pow(2,31)-1)){
            ans = 0;
        }
    }

    cout<<"The Reverse Integer is : "<<ans<<endl;



}