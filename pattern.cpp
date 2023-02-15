#include<iostream>
using namespace std;

int main(){
    int n ;

    cout<<"Enter number" <<endl;
    
    cin >> n;
    cout<<"====~~Pattern~~======"<<endl;
    int i = 1;

    /*while (i<=n){
        int j = 1;
        while (j<=n)
        {
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    while (i<=n){
        int j = 1;
        while (j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

    
    int coutn = 1;
    while (i<=n){
        int j = 1;
        while (j<=n)
        {
            cout<<coutn++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    
        while (i<=n){
        int j = 1;
        while (j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    
        while (i<=n){
        int j = 1;
        while (j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }

    int count = 1;
    while(i<=n){
        int j = 1;
            while(j<=i){
                cout<<count++<<" ";
                j++;
            }
            cout<<endl;
            i++;
        
    }
    


    while(i<=n){
        int j = 1;
        int val = i;
        while(j<=i){
            cout<<val<<" ";
            val++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    while(i<=n){
        int j = 1;
        while (j<=i){
            cout<<i+j-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A'+ i-1; 
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int j = 1;
        while (j<=n){
            char ch = 'A'+j-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    int ct = 0;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + ct;
            cout<<ch<<" ";
            ct = ct +1;
            j++;
        }
        cout<<endl;
        i++;
    }

    int num = 0;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A' + num;
            cout<<ch<<" ";
            num++;
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int j = 1;
        char ch = 'A' + n-i;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int space = n-i;
        while (space){
            cout<<" ";
            space--; 
        }

        int j = 1;
        while (j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int j = 1;
        while (j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
        
    }

    while(i<=n){
        int space = i-1;
        while (space){
            cout<<" ";
            space--;
        }

        int j = 1;
        while (j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int space = i-1;
        while (space){
            cout<<" ";
            space--;
        }
        int j = 1;
        while (j<=n-i+1){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

    while (i<=n)
    {
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }

        int j = 1;
        while (j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
        
    }

    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        while (j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

    while (i<=n)
    {
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        int st = i-1;
        while (st)
        {
            cout<<st;
            st--;
        }
        
        cout<<endl;
        i++;
        
    }
    */
    int cnt = 1;
    while (i<=n)
    {
        int cnt = 1;
        while (cnt<=n-i+1)
        {
            cout<<cnt;
            cnt++;
        }
        // while (cnt>=1)
        // {
        //     cout<<cnt;
        //     cnt--;
        // }
        
        int j = 1;
        while (j<=i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    while (cnt>=1)
        {
            cout<<cnt;
            cnt--;
        }
        

    // while (i<=n){
    //     int star = i-1;
    //     while (star)
    //     {
    //         cout<<"*";
    //         star--;
    //     }

    //     int j = 1;
    //     int val = n;
    //     while (j<=n)
    //     {
    //         cout<<n;
    //         n--;
    //         j++;
    //     }
        cout<<endl;
        i++;
        
        
    }
    