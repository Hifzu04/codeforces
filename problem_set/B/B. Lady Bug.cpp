#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n;
    cin >> n;
   string a  ,b;
   cin>>a>>b;
    ll cnt1 = 0, cnt2 = 0;
   
    loop
    {
        if (i & 1) {
            cnt2 += a[i] == '0';
            cnt1 += b[i] == '0';
        } else {
            cnt1 += a[i] == '0';
            cnt2 += b[i] == '0';
        }
    }

    if(cnt1>= (n+1)/2 && cnt2>=n/2) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
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