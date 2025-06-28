#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    bool nozero = true;
    int n ; cin>>n;
    vector<int>vec(n);
    for(int i =0;  i<n ;i++){
    
        cin>>vec[i]; 
        if (vec[i]==0) nozero=false;


    }
    if(nozero) {
        cout<<"YES"<<"\n";
        return ;
    }

    for(int i=1 ; i<n ; i++ ){
        if(vec[i] ==0 && vec[i-1]==0){ cout<<"YES\n";
        return;}
    }

    cout<<"NO\n";
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