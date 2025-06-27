#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    if (arr[n - 1] - arr[0]  > k && arr[n-1]==arr[n-2])
    
        
        {
            cout << "Jerry\n";
            return;
        }
    if(arr[n-1]-arr[0]-1 >k)
        {
            cout << "Jerry\n";
            return;
        }
    

    if (sum & 1)
        cout << "Tom" << "\n";
    else
        cout << "Jerry" << "\n";
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