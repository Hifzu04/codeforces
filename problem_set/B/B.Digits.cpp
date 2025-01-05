#include <bits/stdc++.h>
#define ll long long
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; 
    while(t--){    
    ll n, d;
    cin>>n>>d;
    cout<<1<<" ";
    if(d%3==0 or n>=3 ) cout<<3<<" ";
    if(d%5 == 0) cout<<5<<" ";
    if(d==7 or n>=3) cout<<7<<" ";
    if(d%9==0 or n>=6 or (d%3==0&&n>=3)) cout<<9<<" ";
    cout<<"\n";


}
    return 0;
}