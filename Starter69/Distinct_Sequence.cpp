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
        vector<pair<int, int>> v;
        for (int i = 0; s[i] != '\0'; i++)
        {
            v.push_back({s[i] - '0', i + 1});
        }
        sort(v.begin(), v.end());
        if ((v[0].first != v[n].first) || (v[n - 1].first != v[2 * n - 1].first))
        {
            for (int i = 0; i < n; i++)
            {
                out v[i].second << " ";
            }
            out endl;
        }
        else
            out - 1 << endl;
    }
    ret0
}
