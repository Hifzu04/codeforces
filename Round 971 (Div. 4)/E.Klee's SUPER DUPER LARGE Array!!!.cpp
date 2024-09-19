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
        ll addIndex = n/2;
        if(n&1 ) addIndex++;
        
       // cout<<addIndex<<" ";
        int addSum = 0;
        for(ll i = 0 ; i < addIndex ; i++){
            addSum+=k;
            k++;
        }for(ll i= addIndex ; i< n; i++ ){
            addSum-=k;
            k++;
        }
        cout<<abs(addSum);
    }

    return 0;
}