#include <bits/stdc++.h>
#define ll long long
#define loop for (ll i = 0; i < n; i++)
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        if (l != r)
        {
            cout << abs(l - r)<<"\n";
        }
        else
        {
           //cout<<checkPrime(l)<<"\n";
           if(l==1) cout<<1<<"\n";
           else cout<<0<<"\n";
            

        }
    }
    return 0;
}