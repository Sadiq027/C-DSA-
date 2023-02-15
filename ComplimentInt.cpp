#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter Number : ";
    cin>>n;

    int m = n;
    int mask = 0;

    while(m!=0){
        mask = (mask << 1) | 1;
        m = m>>1;
    }
    int ans = (~n) & mask;

    if(n==0){  // ==> Edge Case!!!
        ans = 1;
    }
    cout<<"The Complement of given number is : "<<ans;
}