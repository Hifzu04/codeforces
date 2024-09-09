#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = " ";
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < 4; i++)
            {
                char a;
                cin >> a;
                s += a;
            }
        }

        //cout<<s<<endl;

        for (int i = 4 * n; i > 0; i--)
        {
            if (s[i] == '#')
            {
                if (i % 4 == 0)
                {
                    cout << 4 << " ";
                    continue;
                }
                else
                {
                    cout << i % 4 << " ";
                    continue;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}