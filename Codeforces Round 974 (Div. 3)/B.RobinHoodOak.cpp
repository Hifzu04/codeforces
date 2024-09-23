#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll sum = (k * (2 * n + 1 - k)) / 2;
        if (sum & 1)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }

    return 0;
}