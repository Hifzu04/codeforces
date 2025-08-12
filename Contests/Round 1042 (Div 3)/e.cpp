#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
#define yes cout << "YES\n"
#define no cout << "NO\n"
 
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
 
 
 bool flag = true;


       if( a[n-1] != b[n-1] ) {no ; return;}
    for (int i = n-2; i >=0; i--)
    {
        if (a[i] == b[i] || (a[i] ^ a[i + 1]) == b[i] || (a[i]^ b[i+1]) ==b[i])
            continue;
 
        else
        {
            flag = false ;
            break;
        }
    }
  cout << (flag? "YES" : "NO") << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}