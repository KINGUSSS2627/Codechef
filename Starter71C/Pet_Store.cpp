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
        int A[n];
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            in A[i];
            if (max < A[i])
            {
                max = A[i];
            }
        }
        int B[max + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            B[A[i]]++;
        }
        int flag = 1;
        for (int i = 0; i < max + 1; i++)
        {
            if (B[i] % 2 != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            out "YES" << endl;
        }
        else
        {
            out "NO" << endl;
        }
    }
    ret0
}