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
        int a, b, c;
        in a >> b >> c;
        if (a + b == c || b + c == a || c + a == b)
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