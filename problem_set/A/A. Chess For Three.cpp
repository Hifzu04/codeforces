#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    if ((p1 + p2 + p3) & 1)
    {
        cout << -1 << "\n";
        return;
    }
    else {
        if(p1+p2 <p3){
            cout<<p1+p2<<"\n";
        }else cout<<(p1+p2+p3)/2<<"\n";
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