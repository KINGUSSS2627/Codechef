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
        string s;
        in s;
        int A[n] = {0};
        int c = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] != s[i])
            {
                c++;
                A[i] = c;
            }
            else
            {
                A[i] = c;
            }
        }
        int temp = INT_MAX;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i - (k - 1) >= 0)
            {
                int check = A[i] - A[i - k + 1];
                if (s[i] == '0')
                    check++;
                temp = min(temp, check);
            }
            else
            {
                break;
            }
        }
        out temp << endl;
    }
    ret0
}