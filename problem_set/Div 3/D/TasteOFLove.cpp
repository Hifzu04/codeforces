#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

ll dp[200005];

ll rec(int i, int n, string &s, int m, int k){
    // base
    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1)return dp[i];
    if(s[i]=='C')return INT_MAX;
    if(s[i]=='W'){
        return dp[i]=1+rec(i+1,n,s,m,k);;
    }
    // recursive
    ll jump=INT_MAX;
    for(int j=1;j<=m;j++){
        jump=min(jump,rec(i+j,n,s,m,k));
    }
    return dp[i]=jump;
}

void solve()
{
  ll n,m,k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    s="L"+s;
    n++;
    for(int i=0;i<200005;i++)dp[i]=-1;
    ll swims=rec(0,n,s,m,k);
    if(swims<=k)yes; else no;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}