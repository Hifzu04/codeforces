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
        int n;
        cin >> n;
        map<ll, ll> A;
        map<ll, ll> B;
        loop
        {
            ll k;
            cin >> k;
            A[k]++;
        }
        loop
        {
            ll k;
            cin >> k;
            B[k]++;
        }

        ll asize = A.size();
        ll bsize = B.size();

        if (asize + bsize >= 4)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}