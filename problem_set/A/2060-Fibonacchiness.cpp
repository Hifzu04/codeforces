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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int k = b + a;
        int l = c - b;
        int m = d - c;

        if (k == l && k== m)
            cout << 3;
        else if (k == l or k == m or l == m)
            cout << 2;
        else
            cout << 1;

        cout << "\n";
    }
    return 0;
}