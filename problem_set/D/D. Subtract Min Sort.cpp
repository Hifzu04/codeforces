#include <bits/stdc++.h>
#define ll long long
#define loop(n) for (ll i = 0; i < n; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, inputs;
        cin >> n;
        deque<ll> d(n);
        loop(n)
        {
          cin>>inputs;
          d.push_back(inputs);
        }
        bool flag = 1;
        while(d.size()>1)
        {
            if(d[0] >d[1]) {
                flag = 0;
              //cout<<"HIFz";
                break;

            }
            else if(d[0] < d[1] ){
                d[1] -= d[0];
                d.pop_front();
            }
            else {
                d.pop_front();
                d.pop_front();
            }
        }

        cout<<(flag ? "YES" : "NO")<<"\n";
    }
    return 0;
}