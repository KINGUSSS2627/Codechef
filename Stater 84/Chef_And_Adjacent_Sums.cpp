#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1;
    deque<int> dq;
    for (auto &it : v)
    {
        cin >> it;
        v1.push_back(it);
    }
    sort(v1.begin(), v1.end());
    for (auto &it : v1)
    {
        dq.push_front(it);
    }
    v.clear();
    while (!dq.empty())
    {
        v.push_back(dq.front());
        dq.pop_front();
        if (!dq.empty())
        {
            v.push_back(dq.back());
            dq.pop_back();
        }
    }
    int z = v1[n - 1] + v1[n - 2];
    bool flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] + v[i + 1] >= z)
        {
            flag = 1;
            break;
        }
    }
    if (!flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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