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
        int x, y, k;
        cin >> x >> y >> k;
        if (x == y)
            cout << 0 << endl;
        else if (abs(x - y) < k)
            cout << 1 << endl;
        else if (abs(x - y) % k == 0)
            cout << abs(x - y) / k << endl;
        else
            cout << abs(x - y) / k + 1 << endl;
    }
    ret0
}