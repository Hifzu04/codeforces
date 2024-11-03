#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll sum = 0;
        ll maxm = arr[0];
        for (ll i = 0; i < n; i++)
        {
            sum += arr[i];
            maxm = max(maxm, arr[i]);
            
        }
        bool prime = false;
        for(ll  i = 2 ; i<=sum ; i++){
            if (sum%i != 0 and k==0) {
                prime = true;
                break;
            }
            ///karo julkdi fgfgfgfgffsf

        }

       
        sum += k;
        if(prime){
            cout<<1<<"\n";
        }
        
        else if(sum / maxm > maxm)
        {
            cout << n << "\n";
        }
        else
        {
            cout << sum / maxm << "\n";
        }
    }

    return 0;
}