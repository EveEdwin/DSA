#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=n-i;
        int k=i;
        int l=1;
        int m=1;
        while(l<=j){
            
            cout<<"          ";
            l=l+1;
        }
        while(m<=k){
            cout<<"*";
            m=m+1;
        }
        cout<<endl;
        i=i+1;
    }
}
