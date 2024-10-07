#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcases;
    cin >> testcases;

    for (ll i = 0; i < testcases; i++)
    {
        ll size;
        cin >> size;
        ll arr[size];
        ll sum = 0;
        for (ll i = 0; i < size; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0)
                sum += arr[i];
            else
                sum -= arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}