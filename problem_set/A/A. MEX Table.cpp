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
        ll n, m;
        cin >> n >> m;
       cout<<max(n,m)+1<<"\n";
    }
    return 0;
}