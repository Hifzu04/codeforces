#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s ; 
    for(int i = 1 ; i<=12 ; i++){
        if (a==i || b==i ) s+='a';
        if(c==i || d==i) s+='b';
    }
    cout<<(s=="abab" || s=="baba" ? "YES\n" : "NO\n");
    
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