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
        ll n;
        cin >> n;
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = n / (a + b + c);
        ll myans = ans * 3;
        ll rem =0;
        ll cnt = 0;
        
            rem = (a+b+c)*ans;
        
        if (rem < n)
        {
            rem += a;
            cnt++;
        }
        if (rem < n)
        {
            rem += b;
            cnt++;
        }
        if (rem < n)
        {
            rem += c;
            cnt++;
        }

        cout << myans + cnt << "\n";
    }
    return 0;
}