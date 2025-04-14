#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll evenSum = 0;
    ll oddSum = 0;
    ll n;
    cin >> n;
    ll arr[n];
    ll cntodd = 0; 
    ll cnteven = 0;
    ll maxm = -1;

    ll maxmeven =-1;

    loop
    {
        cin >> arr[i];
        if (arr[i] % 2 == 1)
        {
            oddSum += arr[i];
            cntodd++;
            maxm = max(maxm, arr[i]);
        }
        else
        {
            cnteven++;
            evenSum += arr[i];
            maxmeven = max(maxmeven , arr[i]);
        }
    }
    if (cntodd == n)
        cout << maxm << "\n";
    else if (cnteven==n){
        cout<<maxmeven<<"\n";
    }
    else
    {
        if (cntodd == 0)
            cout << oddSum + evenSum - cntodd << "\n";


        else
            cout << oddSum + evenSum - cntodd + 1 << "\n"; 
    }
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}