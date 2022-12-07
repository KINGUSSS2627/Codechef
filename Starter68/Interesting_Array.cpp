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
        int n;
        in n;
        int A[n];
        int B[n] = {0};
        int C[n] = {0};
        for (int i = 0; i < n; i++)
        {
            in A[i];
        }
        sort(A, A + n);
        int i = 0, j, k1 = 0;
        if (n % 2 == 0)
        {
            j = n / 2;
        }
        else
        {
            j = n / 2 + 1;
        }
        for (int k = 0; k < n; k++)
        {
            if (k < j)
            {
                B[k] = A[k];
            }
            else
            {
                C[k1] = A[k];
                k1++;
            }
        }
        sort(B, B + n, greater<int>());
        sort(C, C + n, greater<int>());
        int D[n];
        for (int p = 0, q = 0, r = 0; p < n && q < n && r < n;)
        {
            if (B[p] != 0)
            {
                D[r] = B[p];
                p++;
                r++;
            }
            if (C[q] != 0)
            {
                D[r] = C[q];
                r++;
                q++;
            }
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(D[i]);
        }
        if (s.size() == 1)
        {
            cout << -1;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (D[i] != 0)
                {
                    cout << D[i] << " ";
                }
            }
        }
        cout << endl;
    }
    ret0
}
