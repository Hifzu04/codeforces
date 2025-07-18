#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Casino {
    ll l, r, real;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<Casino> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].l >> a[i].r >> a[i].real;
        }

    
        sort(a.begin(), a.end(),
             [](auto &A, auto &B){ return A.l < B.l; });
        
        priority_queue<pair<ll,ll>> pq;

        ll curr = k;
        int idx = 0;  

        while (true) {
        
            while (idx < n && a[idx].l <= curr) {
                pq.emplace(a[idx].real, a[idx].r);
                idx++;
            }

            
            while (!pq.empty() && pq.top().second < curr) {
                pq.pop();
            }

        
            if (pq.empty() || pq.top().first <= curr)
                break;

    
            curr = pq.top().first;
            pq.pop();
            
        }

        cout << curr << "\n";
    }

    return 0;
}
