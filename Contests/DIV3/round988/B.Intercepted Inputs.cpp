#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll k;
        cin >> k;
        vector<ll> vec(k);
        for (ll i = 0; i < k; i++) cin >> vec[i];

        unordered_map<ll, ll> indices; // Map to store element to index mapping

        for (ll i = 0; i < k; i++) {
          

            ll target = (k - 2) / vec[i];

            // Check if the target exists in the map and is not the current index
            if (indices.count(target) && indices[target] != i) {
                cout << vec[i] << " " << target << "\n";
                
                break;
            }

            // Store current element and its index in the map
            indices[vec[i]] = i;
        }


    }

    return 0;
}
