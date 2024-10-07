
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (l % 2)
            l--;
        cout << (r - l + 1) / 4<<"\n";

                  
    }
}