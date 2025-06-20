#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<vector<ll>>pre1(n+1 , vector<ll>(26, 0));
    vector<vector<ll>>pre2(n+1, vector<ll>(26,0));
    

    for(ll i = 1 ; i<=n ; i++){
        char c = a[i-1];
        char d = b[i-1];
        pre1[i][c-'a']++;
        pre2[i][d-'a']++;
        for(ll j=0; j<26 ; j++){
            pre1[i][j] += pre1[i-1][j];
            pre2[i][j] += pre2[i-1][j];
        }
    }

    while(q--){
        int l , r; cin>>l>>r;
        ll diff = 0 ; 
        for(int i =0 ; i<26 ; i++){
             ll  diff1 = pre1[r][i] - pre1[l-1][i];
             ll diff2 = pre2[r][i] - pre2[l-1][i];
             diff += abs(diff2-diff1);
        }

        cout<<diff/2<<"\n";
    }


}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}