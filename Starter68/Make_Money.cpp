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
        int n, x, c;
        in n >> x >> c;
        int A[n];
        int count = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            in A[i];
            if (x - A[i] > c)
            {
                A[i] = x;
                count++;
            }
            sum += A[i];
        }
        cout << sum - count * c << endl;
    }
    ret0
}