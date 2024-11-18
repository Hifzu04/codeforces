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
        ll k;
        cin >> k;
        vector<int> vec(k);
        vector<int> cnt(k + 1);
        for (int i = 0; i < k; i++)
        {
            cin >> vec[i];
            cnt[vec[i]] += 1;
        }
        for (int x = 1; x <= k; x++)
        {
            if (cnt[x] > 0 && (k - 2) % x == 0)
            {
                if (cnt[(k - 2) / x] > 0)
                {
                    cout << x << " " << (k - 2) / x << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}
