#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcases;
    cin >> testcases;

    while (testcases--)
    {
        int steps = 0;
        ll a, b, k;
        cin >> a >> b >> k;

        int currSumA = 0;
        int currSumB = 0;

        while (currSumA < a || currSumB < b)
        {
            if (true)
            {
                if (a - currSumA >= k)
                {
                    currSumA += k;
                    steps++;
                }
                else
                {
                    currSumA += (a - currSumA);
                    steps++;
                }
            }
            if (true)
            {
                if (b - currSumB >= k)
                {
                    currSumB += k;
                    steps++;
                }
                else
                {
                    currSumB += (b - currSumB);
                    steps++;
                }
            }
        }
        cout << steps << endl;
    }

    return 0;
}
