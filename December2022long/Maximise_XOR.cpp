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
        string s1, s2, s3 = "";
        in s1 >> s2;
        int c0 = 0, c1 = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '1')
                c1++;
            else
                c0++;
        }
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] == '1')
                c1++;
            else
                c0++;
        }
        int minn = min(c0, c1);
        for (int i = 0; i < minn; i++)
        {
            s3 += '1';
        }
        for (int i = 0; i < s1.length() - minn; i++)
        {
            s3 += '0';
        }
        out s3 << endl;
    }
    ret0
}