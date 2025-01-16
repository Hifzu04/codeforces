#include <bits/stdc++.h>
#define ll long long
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        cout << n[i];
        if (count == 2){
            cout << '-';
            count=0;
        }


         count++;   
    }
    cout << "\n";

    return 0;
}