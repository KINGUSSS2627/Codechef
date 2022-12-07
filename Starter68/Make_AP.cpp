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
    int t;
    in t;
    tc
    {
        int a, b, c;
        in a >> b;
        if ((a + b) % 2 == 0)
        {
            cout << (a + b) / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    ret0
}