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
        for (int i = 0; i < n; i++)
        {
            in A[i];
        }
        int hcf = 0;
        for (int i = 0; i < n; i++)
        {
            hcf = __gcd(hcf, A[i]);
        }
        for (int i = 0; i < n; i++)
        {
            out A[i] / hcf << " ";
        }
        out endl;
    }
    ret0
}