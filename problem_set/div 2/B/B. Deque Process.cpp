#include <bits/stdc++.h>
using ll = long long;
#define f(i,n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no  cout << "NO\n"

void solve() {
    int n; 
    cin >> n;
    int arr[n];
    f(i,n) cin >> arr[i];

    int i = 0, j = n - 1;
    string s =""; 
    while (i <= j) {
        // first comparison
        if (arr[i] < arr[j]) s+= "LR";
        else               s+= "RL";
        i++; j--;

        // check bounds again before doing the second compare
        if (i > j) break;

        
        if (arr[i] < arr[j]) s+= "RL";
        else               s+="LR";
        i++; j--;
    }
    if(n&1) for(int i = 0 ; i<n ; i++) cout<<s[i];
    else cout<<s;
    cout << "\n";
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