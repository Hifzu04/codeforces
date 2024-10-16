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
        ll n, x;
        cin >> n >> x;
        vector<ll> vec(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        unordered_map<ll , ll>freq;
        for(int i =0 ; i< n ; i++) freq[i] = 0; 
        for(int i = 0 ; i <n ; i++){
             freq[vec[i]]++;
        }
        ll ans = n;

        for(int i = 0 ; i< n  ; i++){
            if(freq[i] ==0){
                  ans=i;
                  break;
            }
            freq[i]--;
            freq[i+x]+=freq[i];
        }
        cout<<ans<<"\n";
       
    }
    return 0;
}