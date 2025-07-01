#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

ll add(ll y)
{
    cout << "add " << y << endl;
    ll r;
    cin >> r;
    return r;
}

ll done()
{
    cout << "!" << endl;
    ll r;
    cin >> r;
    if (r == -1)
        exit(0);
    return r;
}

ll dig()
{
    cout << "digit " << endl;
    ll r;
    cin >> r;
    return r;
}

ll multiply(ll y)
{
    cout << "mul " << y << endl;
    ll r;
    cin >> r;
    return r;
}

void solve()
{
    ll n;
    cin >> n;
    multiply(9);

    dig();
    dig();
    add(n-9);
    done();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


//alternate version 

//  #include<bits/stdc++.h>
//  using namespace std;
//  void solve() {
//      int n;
//      cin >> n;
//      cout << "mul " << 9 << endl;
//      int x;
//      cin >> x;
//      cout << "digit" << endl;
//      cin >> x;
//      cout << "digit" << endl;
//      cin >> x;
//      cout << "add " << n - 9 << endl;
//      cin >> x;
//      cout << "!" << endl;
//      cin >> x;
//      assert(x == 1);
//  }
//  int main() {
//      ios::sync_with_stdio(0), cin.tie(0);
//      int t = 1;
//      cin >> t;
//      while (t--) {
//          solve();
//      }
//  }