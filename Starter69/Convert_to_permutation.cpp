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
        int n, flag = 1;
        in n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            in A[i];
        }
        sort(A, A + n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] > i + 1)
            {
                out - 1 << endl;
                flag = 0;
                break;
            }
            sum += ((i + 1) - A[i]);
        }
        if (flag == 1)
            out sum << endl;
    }
    ret0
}