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
        int diff_a = a;
        int diff_b = b;
        int currSumA = 0;
        int currSumB = 0;

        while (currSumA < diff_a || currSumB < diff_b)
        {
            if (true)
            {
                if (diff_a - currSumA >= k)
                {
                    currSumA += k;
                    steps++;
                    
                }
                else
                {
                    currSumA += (diff_a - currSumA);
                    steps++;
                    
                }
            }
            if (true)
            {
                if (diff_b - currSumB >= k)
            {
                currSumB += k;
                steps++;
                
            }
            else
            {
                currSumB += (diff_b - currSumB);
                steps++;
               
            }
            }
            

            
        }
        cout << steps << endl;
    }

    return 0;
}
