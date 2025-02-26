#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int aur=0,flag=0;
        for(int i=0; i<n-1; i++){
            if((x|i)==x and !flag){
                aur=aur|i;
                cout<<i<<" ";
            }
            else{
                flag=1;
                cout<<0<<" ";
            }
        }
        if(flag) cout<<x<<endl;
        else{
            if((aur|(n-1))==x) cout<<n-1<<endl;
            else cout<<x<<endl;
        }
    }
} 