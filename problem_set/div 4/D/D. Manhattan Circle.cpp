#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"


void solve()
{
    ll r, c;
    cin >> r >> c;
    vector<vector<char>> arr(r, vector<char>(c));
    
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    ll startr = 0;
    ll startc = 0;
    bool found = false;
    for (ll i = 0; i < r && !found; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            if (arr[i][j] == '#')
            {
                startc = j;
                startr = i;
                found = true;
                break;
            }
        }
    }

    ll endr = startr;  
    for (ll i = startr + 1; i < r; i++)
    {
        if (arr[i][startc] == '#')
        {
            endr = i;
        }
        else
            break;
    }
    ll mid = (startr + endr) / 2;
    cout << mid + 1 << " " << startc + 1 << "\n";  
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}