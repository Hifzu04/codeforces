#include <bits/stdc++.h>
using ll = long long;
#define loop for (ll i = 0; i < n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<char, char> converse;
    converse['B'] = 'R';
    converse['R'] = 'B';
    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        while (i < n && str[i] == '?')
        {
            i++;
        }
        if (i == n)
            break;

        if ((i - ans.size()) % 2)
        {
            char cons = str[i];
            for (int j = ans.size(); j <= i; j++)
            {
                ans += converse[cons];
                cons = converse[cons];
            }
        }
        else
        {
            char cons = converse[str[i]];
            for (int j = ans.size(); j <= i; j++)
            {
                ans += converse[cons];
                cons = converse[cons];
            }
        }
        while (ans.size() < n)
        {
            int last = ans.size();
            ans += converse[ans[last - 1]];
           
        }
    }
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