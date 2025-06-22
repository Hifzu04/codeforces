#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int l1,r1,l2,r2, l3, r3;
    cin>>l1>>r1>>l2>>r2>>l3>>r3;
    bool flag = false; 

    if(l1==l2 && l2==l3 && ((r1+r2+r3) == l1)) {
        flag = true;
    }
   if(r1==r2 && r2==r3 && ((l1+l2+l3) ==r3)) flag = true;
    if (l2==l3 && l1+l2==r1 && r2+r3==r1) flag = true;
    if (r2==r3 && r1+r2==l1 && l2+l3==l1) flag = true; 

    if (flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";


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