#include <bits/stdc++.h>
class Solution
{
public:
    int reverse(int x)
    {

        int ans = 0;
        int sign = x < 0 ? -1 : 1;

        x = abs(x);

        while (x > 0)
        {

            //cout<<21478364<<" "<< ans <<"\n";
            if (INT_MAX / 10 < ans)
            {
                //cout <<INT_MAX/10<<" "
                return 0;
            }

            ans = ans * 10 + x % 10;
            x = x / 10;
        }
        return sign * ans;
    }
};