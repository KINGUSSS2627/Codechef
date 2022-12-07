#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define o  \
    int t; \
    cin >> t;
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    o;
    tc
    {
        int x, n;
        in n >> x;
        int s = pow(2, x);
        while (n--)
        {
            s = s - (s / 2);
        }
        cout << s << endl;
    }
    ret0
}