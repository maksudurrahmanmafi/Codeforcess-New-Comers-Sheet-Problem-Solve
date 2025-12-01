#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int space = n - 1, star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
            cout << " ";
        for (int j = 1; j <= star; j++)
            cout << "*";
        cout << '\n';
        space--;
        star += 2;
    }
    return 0;
}
