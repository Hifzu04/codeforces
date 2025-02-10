#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

int gcd(int a,int b){
    if(b%a==0 ) return a;

    return gcd(b%a,a);
}

void solve() {
    int a , b ;

    cin>>a>>b;

    int hcf = gcd(a,b);

    cout<< (a/hcf )*b<<"\n";

}
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1; cin>>t; 
    while(t--){    
    solve();

}
    return 0;
}