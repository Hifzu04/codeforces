#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    int n  ,s ;
    cin>>n>>s;
    int sum = 0;
    int arr[n];
    int cnt0 = 0 ; 
    int cnt1  = 0;
    int cnt2 = 0;
    f(i,n){
        cin>>arr[i];
        sum+=arr[i];

        if(arr[i] ==0 ) cnt0++;
        else if(arr[i]==1) cnt1++;
        else cnt2++;
    }

    if(s-sum==1 || s <sum){
    
        while(cnt0){
            cout<<0<<" ";
            cnt0--;
        } 
        while(cnt2){
            cout<<2<<" ";
            cnt2--; 
        }while(cnt1){
            cout<<1<<" ";
            cnt1--;
        }
        cout<<"\n";
    }else cout<<-1<<"\n";


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