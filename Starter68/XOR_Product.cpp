#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define o  \
    int t; \
    cin >> t;
#define ret0 return 0;
#define p 998244353
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    o;
    tc
    {
        int n;
        in n;
        int A[n];
        int B[n] = {0};
        int C[n] = {0};
        int j = 0, k = 0, c1 = 0;
        for (int i = 0; i < n; i++)
        {
            in A[i];
            if (A[i] % 2 == 0)
            {
                B[j] = A[i];
                j++;
            }
            else
            {
                C[k] = A[i];
                if (A[i] == 1)
                    c1++;
                k++;
            }
        }
        sort(B, B + n);
        for (int i = 0; i < n && c1 > 0; i++)
        {
            if (B[i] != 0)
            {
                B[i] = B[i] ^ 1;
                c1--;
            }
        }
        int m = 1;
        for (int i = 0; i < n; i++)
        {
            if (B[i] != 0)
            {
                m = ((m % p) * (B[i] % p)) % p;
            }
            if (C[i] != 0 && C[i] != 1)
            {
                m = ((m % p) * (C[i] % p)) % p;
            }
        }
        out m % p << endl;
    }
    ret0
}