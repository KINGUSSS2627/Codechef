#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        int B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        int c = 0;
        vector<int> v = {0};
        for (int i = 0; i < n; i++)
        {
            if (A[i] != 0 && B[i] != 0)
            {
                c++;
            }
            else
            {
                v.push_back(c);
                c = 0;
            }
        }
        v.push_back(c);
        sort(v.begin(), v.end(), greater<int>());
        cout << v[0] << endl;
    }
    return 0;
}