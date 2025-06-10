#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;
bool canExplode(int n, vector<long long>& a) {
    // 1) must be an arithmetic progression
    long long d = a[1] - a[0];
    for (int i = 2; i < n; i++) {
        if (a[i] - a[i-1] != d)
            return false;
    }
    // 2) y = (a[0] - d) / (n+1)
    long long num = a[0] - d;
    long long den = n + 1;
    if (num < 0 || num % den != 0)
        return false;
    long long y = num / den;
    long long x = d + y;      // since x - y = d
    return (x >= 0 && y >= 0);
}



void solve() {
    ll n;
    cin>>n;
    vector<long long> arr(n);
    loop cin>>arr[i];

    bool myans = canExplode(n, arr);
    if (myans) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
   

    

    

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