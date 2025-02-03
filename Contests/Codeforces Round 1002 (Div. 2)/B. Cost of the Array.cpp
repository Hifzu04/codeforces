#include <bits/stdc++.h>
#define ll long long
#define loop for (ll i = 0; i < n; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
       // map<ll, ll> mpp;
        vector<ll> vec(n);
        loop
        {
            cin >> vec[i];
          //  mpp[vec[i]]++;
        }
        bool flag = 0;
        ll cnt = 1;

        if (n == k)
        {
            for (ll i = 1; i < n; i += 2)
            {
                if (vec[i] == cnt)
                {

                    cnt++;
                  
                }
                else
                {
                    //cout<<cnt<<"\n";
                    break;
                }
            }
            cout<<cnt<<"\n";
        }

        else
        {
            for (ll i = 1; i <= n - k + 1; i++)
            {
                if (vec[i] != 1)
                {
                    cout << 1 << "\n";
                    flag = 0;

                    break;
                }
                else
                {
                    flag = 1;
                }
            }
            if (flag)
                cout << 2 << "\n";
        }
    }
    return 0;
}