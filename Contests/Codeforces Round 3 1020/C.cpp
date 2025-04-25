#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> veca(n);
    vector<ll> vecb(n);
    loop
    {
        cin >> veca[i];
    }
    loop
    {
        cin >> vecb[i];
    }
    bool flag = 0;
    ll x = 0;
    loop
    {
        
        if (vecb[i] != -1)
        {
            flag = 1;
            x = veca[i]+vecb[i];
            break;
        }
        
    }
    if(flag){
        bool flag1 = 0;
        loop{
            if(veca[i]+vecb[i] != x and vecb[i] != -1){
                flag1= 1 ;
                break;
            }
           
        }
        loop{
            if( x-veca[i]> k || x-veca[i]<0){
                flag1 = 1;
                break;
           }
        }
        if(flag1==1) cout<<0<<"\n";
        else cout<<1<<"\n";
    }
    else {

        ll highest = veca[0];
        ll lowest = veca[0];
       
        

        loop{
            //highest
            if (veca[i]>=highest) highest = veca[i];
            if(veca[i]<=lowest) lowest = veca[i];
        }

        cout<<lowest+k-highest+1<<"\n";
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