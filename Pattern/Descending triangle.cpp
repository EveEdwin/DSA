#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int j=n-i;
        while(j){
            cout<<" ";
            j=j-1;
        }
        int k=1;
        while(k<=i){
            cout<<k;
            k=k+1;
        }
        int l=i;
        while(l-1){
            cout<<l-1;
            l=l-1;
        }
        cout<<endl;
        i=i+1;
    }
}