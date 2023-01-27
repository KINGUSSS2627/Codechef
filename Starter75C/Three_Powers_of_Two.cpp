#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    in t;
    tc
    {
        int n;
        in n;
        string s;
        in s;
        int c1 = 0;
        for (auto &it : s)
        {
            if (it == '1')
                c1++;
        }
        if (n < 3 && c1 < 2)
        {
            out "NO" << endl;
        }
        else
        {
            if (c1 > 3)
            {
                out "NO" << endl;
            }
            else
            {
                out "YES" << endl;
            }
        }
    }
    ret0
}