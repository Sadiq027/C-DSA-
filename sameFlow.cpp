#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter Number : ";
    cin>>n;

    int ans = 0;
    while(n!=0){
        int digit = n/1;
        ans = (ans*10) + digit;
        n= n>>1;
    }

    cout<<"The Answer is : "<<ans;
}