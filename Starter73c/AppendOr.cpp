#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int numberOf1(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, y;
        in n >> y;
        int a[n];
        int arrOR = 0;
        for (int i = 0; i < n; i++)
        {
            in a[i];
            arrOR = a[i] | arrOR;
        }
        int x = numberOf1(arrOR);
        int temp = numberOf1(y);
        if (x > temp || (x == temp && y != arrOR))
            out - 1 << endl;
        else
        {
            int res = 0;
            for (int i = 0; i <= y; i++)
            {
                if ((arrOR | i) == y)
                {
                    res = i;
                    break;
                }
            }
            out res << endl;
        }
    }
    return 0;
}
