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
        string s1, s2;
        s1 = s;
        s2 = s;
        reverse(s1.begin(), s1.end());
        // out s1 << " " << s2 << endl;
        vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s2[i - 1] == s1[j - 1])
                    v[i][j] = 1 + v[i - 1][j - 1];
                else
                    v[i][j] = max(v[i - 1][j], v[i][j - 1]);
            }
        }
        out v[n][n] / 2 << endl;
    }
    ret0
}