#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is1100(int i, const string &s)
{
   if (i >= 0 && i + 3 < s.size()){
    if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
    {
        return true;
    }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll q;
        cin >> q;
        ll cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (is1100(i, s))
                cnt++;
        }
        while (q--)
        {
            ll i ; ll v;
            cin>>i>>v;
            i--;
            if(s[i]!= '0'+ v){
                bool beforecnt = is1100(i-3 ,s) || is1100(i-2,s) || is1100(i-1,s) || is1100(i,s);

                s[i] = v + '0';

                bool aftercnt = is1100(i-3 ,s) || is1100(i-2,s) || is1100(i-1,s) || is1100(i,s);

                cnt += aftercnt - beforecnt;
                

            }

            if(cnt>0) cout<<"YES"<<"\n";
                else cout<<"NO"<<"\n";

            
            

        }
    }
    return 0;
}