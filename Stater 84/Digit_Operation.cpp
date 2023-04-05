#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<string> v1(n), v2(n);
    map<char, int> mp1, mp2;
    vector<int> mv1(10), mv2(10);
    bool flag_len = 0;

    for (auto &it : v1)
    {
        cin >> it;
        for (auto &i : it)
        {
            mp1[i]++;
        }
    }
    for (auto &it : mp1)
    {
        mv1[it.first - '0'] = it.second;
    }
    for (auto &it : v2)
    {
        cin >> it;
        for (auto &i : it)
        {
            mp2[i]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v1[i].size() != v2[i].size())
        {
            flag_len = 1;
            break;
        }
    }
    if (flag_len)
    {
        cout << "NO" << endl;
    }
    else
    {

        for (auto &it : mp2)
        {
            mv2[it.first - '0'] = it.second;
        }
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            if (mv1[i] == mv2[i])
            {
                mv1[i] = 0;
                mv2[i] = 0;
            }
            else
            {
                if (mv1[i] > mv2[i])
                {
                    mv1[i] -= mv2[i];
                    mv2[i] = 0;
                }
                else
                {
                    mv2[i] -= mv1[i];
                    mv1[i] = 0;
                }
            }
        }
        int temp = 0;
        for (int i = 0; i < 10; i++)
        {
            temp += mv1[i];
        }
        if (temp <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // for (auto &it : mv1)
        // {
        //     cout << it << " ";
        // }
        // for (auto &it : mv2)
        // {
        //     cout << it << " ";
        // }
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