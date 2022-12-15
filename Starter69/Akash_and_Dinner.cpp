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
        int n, k;
        in n >> k;
        int A[n];
        int B[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            in A[i];
            s.insert(A[i]);
        }
        for (int i = 0; i < n; i++)
        {
            in B[i];
        }
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({B[i], A[i]});
        }
        sort(v.begin(), v.end());
        if (s.size() < k)
        {
            out - 1 << endl;
        }
        else
        {
            set<int> s2;
            int sum = v[0].first;
            int c = 1;
            s2.insert(v[0].second);
            for (int i = 1; i < n; i++)
            {
                // if (A[i] == A[i - 1])
                // {
                // }
                // else
                // {
                //     if (c > k || c == k)
                //         break;
                //     else
                //         sum += B[i];
                //     c++;
                // }
                int temp = s2.size();
                s2.insert(v[i].second);
                if (s2.size() > temp)
                {
                    if (c < k)
                        sum += v[i].first;
                    else if (c > k)
                        break;
                    c++;
                }
            }

            out sum << endl;
        }
    }
    ret0
}