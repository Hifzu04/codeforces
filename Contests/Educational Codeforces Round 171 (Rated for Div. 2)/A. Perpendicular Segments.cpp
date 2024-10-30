#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int val = min(x,y);
        cout<<"0 0 "<<val<<" "<<val<<"\n"<<val<<" 0 0 "<<val<<"\n";
    }


    return 0;
}