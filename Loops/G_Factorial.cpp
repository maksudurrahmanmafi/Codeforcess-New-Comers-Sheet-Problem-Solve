#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll i = 1;
        ll fact = 1;
        // int ans =0;
        do
        {
            fact = fact * i;
            i++;

        } while (i <= n);
        cout << fact << '\n';
    }
    return 0;
}
