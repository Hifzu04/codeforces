#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

bool checkPrime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll x, k;
    cin >> x >> k;
    if (x > 1 && k > 1)
    {
        cout << "NO" << "\n";
    }
    else if (k == 1 and x == 1)
    {
        cout <<"NO"<<"\n";
    }
     else
        {
            if (k == 1)
            {
                // y=x;
                if (checkPrime(x))
                {
                    cout << "YES"<<'\n';
                }
                else
                    cout << "NO" << "\n";
            }
            else if (x==1 && k==2) {
                cout<<"YES"<<"\n";
            }
            else cout<<"NO"<<"\n";
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