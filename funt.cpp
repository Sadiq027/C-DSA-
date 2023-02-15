#include<iostream>
using namespace std;


int power(){

    int a ,b ; 
    cout<<"Enter Number : ";
    cin>>a>>b;

    int ans = 1;

    for(int i = 1 ; i<=b; i++){
        ans *=a;
    }
    return ans;
}

bool evenOdd(){
    int a ; 
    cout<<"Enter Number : ";
    cin>>a;
    if (a%2==0)
    {
        cout<<"It's Even"<<endl;
        return true;
    }else{
        cout<<"It's Odd"<<endl;
        return false;
    }
    
}

int fact(int numm ){ // ===== FACTORIAL ======
    // int numm ; 
    // cin>>numm;
    int fact = 1;
    for (int i = 1; i <= numm; i++)
    {
     fact = fact * i ;
    }
    return fact;
}

int nCr(){ // ==== nCr = n! / r! * (n-r)! ==== FORMULA==== 
    int n , r;
    cout<<"Enter n & r : ";
    cin>>n>>r;

    int neom = fact(n);
    int denom = fact(r) * fact(n-r);

    return neom / denom;
}
int main(){

    cout<<nCr()<<endl;
    
    
}