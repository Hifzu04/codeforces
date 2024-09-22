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
        int n, k;
        cin >> n >> k;
        if (n & 1)
        {
            if ((k - 1) & 1)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
        else
        {
            if ((k - 1) & 1)
            {
                cout << "NO" << "\n";
            }
            else
            {
                cout << "YES" << "\n";
            }
        }
    }

    return 0;
}