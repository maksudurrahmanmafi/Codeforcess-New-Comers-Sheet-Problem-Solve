#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z')
    {
        cout << char(c - 32);
    }
    else
        cout << char(c + 32);
    return 0;
}
