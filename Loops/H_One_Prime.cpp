#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    auto ans = isPrime(n);
    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
