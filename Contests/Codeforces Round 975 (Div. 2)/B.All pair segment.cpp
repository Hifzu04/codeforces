#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<ll, ll> mpp;
        
        for (int i = 0; i < n; i++)
        {
           //ll segment = (arr[i] * i) + (arr[i] * (n - i - 1));
            ll segment = (i+1)*(n-i)-1;
            mpp[segment]++;
             
            if (i > 0)
            {
                ll noOfElemet = arr[i] - arr[i - 1] - 1;
                
                ll gap_segment = i * (n - i);

                mpp[gap_segment] += noOfElemet;
            }
        }

        for (int i = 0; i <q; i++)
        {
            ll a;
            cin >> a;
            if (mpp.count(a))
            {
                cout << mpp[a] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
            
        }
       cout<<"\n";
    }
    return 0;
}