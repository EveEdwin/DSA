#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int k=i-1;
        while(k){
            cout<<" ";
            k=k-1;
        }
        int j=n-i+1;
        while(j){
            cout<<"*";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}