#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];

    loop
    {
        cin >> arr[i];
    }
    vector<ll> vec(n + 2, false);

    bool valid = true;
    for (int i = 0; i < n; i++)
    {
        int seat = arr[i];
        // For the first passenger, there's no need to check adjacent seats.
        if (i > 0)
        {
           bool leftoccupied = false;
           bool rightoccupied = false ;
            if(seat>1 and vec[seat-1] == true) {
                 leftoccupied = true;
            }
       //     bool leftOccupied = (seat > 1) ? vec[seat - 1] : false;
          //  bool rightOccupied = (seat < n) ? vec[seat + 1] : false;

         if (seat <n+1 and vec[seat+1]== true){
            rightoccupied = true ;
          }
            if (!leftoccupied && !rightoccupied)
            {
                valid = false;
                break;
            }
        }
        // Mark the current seat as occupied.
        vec[seat] = true;
    }

    cout << (valid ? "YES" : "NO") << "\n";
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}