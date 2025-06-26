#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    int n ; cin>>n ; 
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    int ans = 0 ; 
    sort(arr, arr+n);
    for(int i = 0 ; i<n ; i++){
        if(((arr[i] + arr[n-1]) %2) !=0){
             ans++;
        }
        else {
            break;
        }
    }
    int ans2 = 0 ;
    for(int i = n-1 ; i>=0 ; i--){
        if(((arr[i]+arr[0]) %2) != 0){
            ans2++;
        }else{
            break;
        }
    }

    cout<<min(ans,ans2)<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}