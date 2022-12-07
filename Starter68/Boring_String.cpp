#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define o  \
    int t; \
    cin >> t;
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    o;
    tc
    {
        int n;
        in n;
        char s[n];
        for (int i = 0; i < n; i++)
        {
            in s[i];
        }
        map<pair<char, int>, int> fq;
        char now = s[0];
        int len = 1;
        fq[{now, len}]++;
        for (int i = 1; i < n; i++)
        {
            if (now != s[i])
            {
                len = 1;
                now = s[i];
            }
            else
            {
                len++;
            }
            fq[{now, len}]++;
        }
        int maxx = 0;
        for (auto &val : fq)
        {
            if (val.second == 1)
            {
                maxx = max(maxx, val.first.second - 1);
                continue;
            }
            maxx = max(maxx, val.first.second);
        }
        cout << maxx << endl;
    }
    ret0
}