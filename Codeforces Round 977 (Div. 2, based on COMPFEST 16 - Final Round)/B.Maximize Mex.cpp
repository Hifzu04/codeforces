#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mex(vector<ll> &vec, int n)
{
    map<ll, ll> mpp;
    for (int i = 0; i < n; i++)
    {
        ll k = vec[i];
        mpp[k]++;
    }
    int currentMax = 0;
    ll missing = 1;
    
    for (auto it = mpp.cbegin(); it != mpp.cend(); ++it)
    {
        // checked = it->second;
        if (it->second > currentMax)
        {
            currentMax = it->second;
        }

        if(it->first + missing != next(it)->first){



        }
    }


        if (currentMax > 1)
    {
        auto it = mpp.rbegin();
        return it->first + 2;
    }
    else
    {
        cout << "wait" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        ll ans = mex(vec, n);
        cout << ans << "\n";
    }

    return 0;
}