#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    string a = "";
    string b = "";
    for (int i = 0; i < s.size() - 1; i++)
        a += s[i];

    for (int i = 1; i < s.size(); i++)
         b+= s[i];

    int i = 1;
    int j = s.size() - 2;
    while (i <= j)
    {
        if (a == b)
        {
            cout << "YES" << "\n"<<a;
            return ;
        }
        a.pop_back();
        b.erase(b.begin());
        i++;
        j--;
    }
    cout<<"NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}