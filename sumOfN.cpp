#include<iostream>
using namespace std;


int main(){
    int sum = 0;
    int n;
    cout<<"Enter N "<<endl;
    cin>>n;

    for(int i = 1; i<=n; i++){
        sum+=i;
        cout<<sum<<" ";
    }

}
