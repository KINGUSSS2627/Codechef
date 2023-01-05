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
        int k = -1;
        for (int i = 2; i * i < n; i++)
        {
            if (n % i == 0)
            {
                k = i;
                break;
            }
        }
        if (k == -1 || (n / k == k) || (n == k))
        {
            out - 1 << endl;
        }
        else
        {
            out "1 " << k << " " << n / k << endl;
        }
    }
    ret0
}
