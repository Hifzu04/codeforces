#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;

    //  vector<int> v(n);
    //     for(int i = 0; i < n; i++) {
    //         if(str[i]=='1') v[i]=1;
    //     }

    bool ans = 0;
    if (str[0]=='1'  || str[n - 1] =='1' ) 
        ans = 1;


    if(!ans){
    for (int i = 0; i < n - 2; i++)
    {
        if (str[i]=='1' && str[i + 1]=='1')
        {
            ans = 1;
        }
    }
    }

    if (ans)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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