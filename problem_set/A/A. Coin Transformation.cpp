#include <bits/stdc++.h>
#define ll long long
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; 
    while(t--){    
    ll n;
    cin>>n;
    ll cnt =0;
    while(n>=4){
        n/=4;
        cnt++;
    }

    cout<<(ll)pow(2,cnt)<<"\n";


}
    return 0;
}