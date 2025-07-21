#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    f(i, n)
    {
        f(j, m)
        {
            if (vec[i][j] == '0')
                continue;

            bool f = 1;
            for (int k = 0; k < i; k++)
            {
                if (vec[k][j] == '0')
                {
                    f = 0;
                    break;
                }
            }
            if (f)
                continue;
            f = 1;

            for(int k = 0; k < j; k++)
            {
                if(vec[i][k]=='0'){
                    f=0;
                    break;
                }
            }
            if(f==0){
                no; return ;
            }
        }
    }
    yes;
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