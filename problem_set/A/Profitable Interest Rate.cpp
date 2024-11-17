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
        ll a, b;
        cin >> a >> b;
        if (a >= b)
        {
            cout << a << "\n";
        }
        else
        {
            if (b - a < a)
                cout << a - (b - a) << "\n";
            else
                cout << 0 << "\n";
        }
    }
    return 0;
}