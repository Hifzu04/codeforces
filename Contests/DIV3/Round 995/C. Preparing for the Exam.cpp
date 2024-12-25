#include <bits/stdc++.h>
#define ll long long
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll mintegers[m];
        set<ll>stk;
        string  ans(m,'0');
        
        
        for (ll i = 0; i < m; i++)
        {
            cin >> mintegers[i];
        }
        for (ll i = 0; i < k; i++)
        {
            ll p ; cin>>p;
            stk.insert(p);
            
        }
       // ll store = mintegers[m-2];

        if (k < (n - 1))
        {
            for (int i = 0; i < m; i++)
                cout << '0';
        }
        else if (k >= n)
        {
            for (int i = 0; i < m; i++)
                cout << '1';
        }

        else
        {
           for(ll i =0; i<n ; i++){
            if(!stk.count(mintegers[i])) ans[i] ='1';
           }

           cout<<ans;
        }
        cout << "\n";
    }
    return 0;
}