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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = 1;

        for (int i = 0; i < n - 1; i++)
        {
            int diff =abs( arr[i] - arr[i + 1]);
            
        

            if (diff != 5 and diff !=7)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}