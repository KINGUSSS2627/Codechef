#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
const int m = 1e9 + 7;
int mod(int x)
{
    return (x % m + m) % m;
}
int multiply(int a, int b)
{
    return ((a % m) * (b % m)) % m;
}
int a_pow_b(int a, int b)
{
    if (b == 0)
        return 1;
    int temp = a_pow_b(a, b / 2);
    temp = multiply(temp, temp);
    if (b % 2)
        return multiply(temp, a);
    return temp;
}
int mod_inverse(int a)
{
    return a_pow_b(a, m - 2);
}
const int N = 200001;
int factorial[N], invfactorial[N];
void precompute()
{
    factorial[0] = invfactorial[0] = 1;
    for (int i = 1; i < N; i++)
    {
        factorial[i] = multiply(factorial[i - 1], i);
        invfactorial[i] = multiply(invfactorial[i - 1], mod_inverse(i));
    }
}
int32_t main()
{
    precompute();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    in t;
    tc
    {
        int n;
        in n;
        string a, b;
        in a >> b;
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                ct++;
        }
        if (ct % 2)
        {
            cout << 0 << endl;
        }
        else
        {
            int temp = a_pow_b(2, n - ct);
            temp = multiply(temp, multiply(factorial[ct], multiply(invfactorial[ct / 2], invfactorial[ct / 2])));
            cout << temp << endl;
        }
    }
    ret0
}