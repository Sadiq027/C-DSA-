#include<iostream>
using namespace std;

int main(){
    /*
    int n = 11 ;
    bool b = 1;

    for(int i= 2 ;i<n ; i++ ){
        if(n%i == 0){
            // cout<<"The No. is not prime"<< endl;
            b = 0;
            break;
        }
    }
    if (b == 0)
    {
        cout<<"Not a Prime";
    }else{
        cout<<"Prime";
    }
    

    for(int i = 0; i<=5; i++){
        cout<<i<<" ";
        i++;
    }
    

    for(int i = 0; i<=5; i--){
        cout<<i<<" ";
        i++;
    }
    
    for(int i = 0; i<=15; i+= 2){
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }
    */
    for(int i = 0; i<5; i++){
        for(int j=i; j<=5;j++){
            if (i+j==10)
            {
                break;
            }
            
            cout<<i<<" "<<j<<" ";
            
        }
        
    }
}