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
        ll ans = 0;
        while (n)
        {
           if(k==1) break;
            ans += n % k;
            n /= k;
        }
        if (k == 1)
            cout << n << "\n";
        else
            cout << ans << "\n";
    }

    return 0;
}