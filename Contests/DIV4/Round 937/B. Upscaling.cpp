#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    cin >> n;
    bool turn = true;
    int cnt = 0;
    if(n&1) cnt =1 ;
   
   
    {
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j += 2)
            {
                if (turn)
                {
                    cout << "##";
                    turn = false;
                }
                else
                {
                    cout << "..";
                    turn = true;
                }
            }
            cnt++;
            cout << "\n";
            if (cnt == 2)
            {
                turn = !turn;
                cnt = 0;
            }
        }
    }
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