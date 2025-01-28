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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int k = r - l + 1;

        vector<int> prefix(a.begin(), a.begin() + r);
        sort(prefix.begin(), prefix.end());
        long long prefix_sum = accumulate(prefix.begin(), prefix.begin() + k, 0LL);

        vector<int> suffix(a.begin() + l - 1, a.end());
        sort(suffix.begin(), suffix.end());
        long long suffix_sum = accumulate(suffix.begin(), suffix.begin() + k, 0LL);

        cout << min(prefix_sum, suffix_sum) << "\n";
    }

    return 0;
}