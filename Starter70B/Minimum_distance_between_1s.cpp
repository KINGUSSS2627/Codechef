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
        char s[n];
        for (int i = 0; i < n; i++)
        {
            in s[i];
        }
        vector<int> A1;
        set<int> B1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                A1.push_back(i);
            }
        }
        int len = A1.size(), flag = 0;
        for (int i = 0; i < len - 1; i++)
        {
            B1.insert(A1[i + 1] - A1[i]);
        }
        for (auto &val : B1)
        {
            if (val % 2 != 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            out 2 << endl;
        else
            out 1 << endl;
    }
    ret0
}