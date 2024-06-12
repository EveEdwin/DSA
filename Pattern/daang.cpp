#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int k=i-1;
        while(k){
            cout<<"*";
            k=k-1;
        }
        int l=i-1;
        while(l){
            cout<<"*";
            l=l-1;
        }
        int m=n-i+1;
        while(m>0){
            cout<<m;
            m=m-1;
        }
        cout<<endl;
        i=i+1;
    }   

}