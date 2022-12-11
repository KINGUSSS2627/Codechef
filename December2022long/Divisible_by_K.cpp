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
        int A[n], B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int temp = 1;
        for (int i = 0; i < n; i++)
        {
            temp = temp * A[i];
            temp = temp % k;
        }
        if (temp == 0)
            out "YES" << endl;
        else
            out "NO" << endl;
    }
    ret0
}