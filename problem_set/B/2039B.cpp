#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
     string s; cin >> s;
  int n = s.size();
  for (int i = 0; i + 1 < n; i++) {
    if (s[i] == s[i + 1]) {
      cout << s.substr(i, 2) << '\n';
      return;
    }
  }
  for (int i = 0; i + 2 < n; i++) {
    if (s[i] != s[i + 1] and s[i] != s[i + 2] and s[i + 1] != s[i + 2]) {
      cout << s.substr(i, 3) << '\n';
      return;
    }
  }
  cout << -1 << '\n';


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