#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b<c) {
            cout<<1<<"\n";
            continue;
        }
        ll  l_common = max(a,c);
        ll r_common = min(b,d);
        ll ext_left = min(a,c);
        ll ext_right = max(b,d);
        ll sum = (r_common-l_common);
        if(ext_left<l_common) sum++;
        if (r_common<ext_right) sum++;

        cout<<sum<<"\n";


    }

    return 0;
}