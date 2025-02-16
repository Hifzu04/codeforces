#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<int, int> freq;
    vector<ll> arr(n);
    loop
    {
        cin >> arr[i];
    }
   
    for (ll num : arr)
    {
        freq[num]++;
    }

    int maxLen = 0;
    int bestStart = -1, bestEnd = -1;
    int currStart = 0, currLen = 0;

   
    for (ll i = 0; i < arr.size(); i++)
    {
       
        if (freq[arr[i]] == 1)
        {
            
            if (currLen == 0)
            {
                currStart = i;
            }
            currLen++;

        
            if (currLen > maxLen)
            {
                maxLen = currLen;
                bestStart = currStart;
                bestEnd = i;
            }
        }
        else
        {
        
            currLen = 0;
        }
    }

    if (bestStart != -1)
    {
        cout << bestStart+1<<" "<<bestEnd +1<<"\n";
        
    
    }
    else cout<<0<<"\n";
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