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
        int evenElements = (n + 1) / 2;
        int oddElements = n - evenElements;
        int maxEven = 0, maxOdd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i&1)
                maxOdd = max(maxOdd, arr[i]);

            else
                maxEven = max(maxEven, arr[i]);
        }
        cout<<max(maxOdd+oddElements, maxEven+evenElements)<<"\n";
    }

    return 0;
}