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
        int ans = 0;
        int i = 0;
        while (s[i] == '1')
        {
            ans++;
            i++;
        }
        int ans2 = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == '1')
            {
                int temp = 0;
                while (s[j++] == '1')
                {
                    temp++;
                }
                j--;
                ans2 = max(ans2, temp);
            }
        }
        out ans2 + ans << endl;
    }
    ret0
}