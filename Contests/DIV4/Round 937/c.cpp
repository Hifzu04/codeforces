#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int hr = stoi(s.substr(0,2));
    string mm = s.substr(3,2);

    int h12 = hr % 12;            
    if (h12 == 0) h12 = 12;       

    string period = (hr < 12) ? " AM" : " PM";

 
    cout << setw(2) << setfill('0') << h12 << ":" << mm << period << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
