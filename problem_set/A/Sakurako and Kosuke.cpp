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
        int n;
        cin >> n;
        if (n % 2==0)
        {
            cout << "Sakurako" << "\n";
        }
        else
            cout << "Kosuke" << "\n";
    }

    return 0;
}