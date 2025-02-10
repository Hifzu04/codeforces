#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll idx = n/2;
        if(n&1 ) idx++;
        
       // cout< idx<<" ";
        ll addSum = 0;
        ll minusSum = 0;
        ll minm = INT64_MAX;
        int left =  k , right =  n+k-1;
       while(left<=right){
            int mid = (left+right)/2;
            addSum = ((((mid+1)*(mid))/2) - (k*(k-1)/2));
            cout<<addSum<<" ";
            minusSum = (right*(right+1)/2) -  ((mid+1)*mid)/2;
            cout<<minusSum<<endl;
            minm  = (minm , abs(addSum-minusSum));
            if(addSum == right) break;
            if(addSum>minusSum) right = mid-1;
            else if(addSum < minusSum) left = mid+1;
            
            // left++;
            // right--;
            
          //  minusSum = ((n-i)/2.0)*((ithElemt+1) +(k + (n-1)));
            
           // minm = min(minm , abs(addSum-minusSum));
        }
       //cout<<minm;
    }
    return 0;
}