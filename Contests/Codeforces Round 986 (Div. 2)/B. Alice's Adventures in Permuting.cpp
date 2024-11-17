#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, b, c;
        cin >> n >> b >> c;
        if (b == 0)
        {
            
             if (c == n - 1 || c == n - 2)
                cout << n - 1 << "\n";  
           else if(c<n-2)
                cout << -1 << "\n";
           else cout<<n<<"\n";
        }
        else
        {
            //cout << n - (ceil((n - c)) / b) << "\n";
            cout<<(n-max(((n-c+b-1)/b),0LL))<<"\n";
        }
    }
    return 0;
}