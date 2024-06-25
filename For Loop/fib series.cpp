#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<0<<1;
    int m=0;
        int k=1;
    for(int i=0;(n-2)>=i;i++){
        
        int s=m+k;
        m=k;
        k=s;
       
        cout<<k<<" ";

    }
    
}