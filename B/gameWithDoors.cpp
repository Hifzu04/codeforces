#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll ans = 0 ; 
        ll a , b, c, d; 
        cin>>a>>b>>c>>d;
        
        pair<ll, ll> alice(a,b); 
        pair<ll, ll >bob(c,d);

        ll minm = min(a,c);
        ll maxm = max(b,d);
        
        //making the door common between the range of both 
        if(alice.first>bob.first) bob.first = alice.first;
        else alice.first = bob.first;

        if(alice.second > bob.second) alice.second = bob.second;
        else bob.second = alice.second;
 
       if(alice.first != minm)  ans++;
       if(alice.second != maxm)  ans++;
       if(maxm-minm ==0) {cout<<1 ; return 0;}
       ans += (alice.second - alice.first);
       cout<<ans<<endl;; 
    }

    return 0;
}