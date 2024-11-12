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
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;
        int x = 0;
        int y = 0;
        bool flag = 0;

        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < n; j++)
            {
                
                

                if (str[j] == 'N')
                    y += 1;
                else if (str[j] == 'S')
                    y -= 1;
                else if (str[j] == 'E')
                    x += 1;
                else
                {
                    x -= 1;
                }

               
                if (x == a && y == b)
                {
                    flag = 1;
                    break;
                }
               
                
            }
             
        }
        if (flag)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}
