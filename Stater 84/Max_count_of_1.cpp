#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans1 = 0, ans2 = 0;
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        ans1 += ((s[i - 1] - '0') ^ temp);
        temp = ((s[i - 1] - '0') ^ temp);
    }
    temp = 1;
    ans2 = 1;
    for (int i = 1; i < n; i++)
    {
        ans2 += (s[i - 1] - '0') ^ temp;
        temp = (s[i - 1] - '0') ^ temp;
    }
    cout << max(ans1, ans2) << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}