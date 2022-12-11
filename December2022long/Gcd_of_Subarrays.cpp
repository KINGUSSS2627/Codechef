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
        // a*b>=a+b as a>=1 && b>=1
        //:. min gcd should be sum on n natural no.
        int temp = n * (n + 1) / 2;
        if (k < temp)
            out - 1 << endl;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                out 1 << " ";
            }
            out k - temp * 1 + 1 << endl;
        }
    }
    ret0
}