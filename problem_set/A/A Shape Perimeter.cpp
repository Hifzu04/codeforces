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

   // do by urself once again 
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> v(n);
        for (auto &x : v)
        {
            cin >> x.first >> x.second;
        }
        int x1 = v[0].first + m, y1 = v[0].second + m, x = v[0].first, y = v[0].second;
        long long result = 4 * m * n;

        for (int i = 1; i < n; ++i)
        {
            x += v[i].first, y += v[i].second;
            long long val = 2 * ((y1 - y) + (x1 - x));
            x1 = x + m, y1 = y + m;
            result -= val;
        }
        cout << result << endl;
    }

    return 0;
}