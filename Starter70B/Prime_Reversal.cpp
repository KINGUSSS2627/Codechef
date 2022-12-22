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
        char s1[n];
        int cs11 = 0, cs21 = 0;
        char s2[n];
        for (int i = 0; i < n; i++)
        {
            in s1[i];
            if (s1[i] == '1')
            {
                cs11++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            in s2[i];
            if (s2[i] == '1')
            {
                cs21++;
            }
        }
        if (cs11 == cs21)
        {
            out "YES" << endl;
        }
        else
        {
            out "NO" << endl;
        }
    }
    ret0
}