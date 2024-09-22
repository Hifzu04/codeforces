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
        int n, k;

        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int takegold = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                takegold += arr[i];
                
            }
            if (arr[i] == 0 && takegold != 0)
            {
                takegold -= 1;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

return 0;
}