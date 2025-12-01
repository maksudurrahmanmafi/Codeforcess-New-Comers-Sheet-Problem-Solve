#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int space = n - 1, star = 1, space2 = 0, star2 = (n * 2) - 1;
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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space2; j++)
            cout << " ";
        for (int j = 1; j <= star2; j++)
            cout << "*";
        cout << '\n';
        space2++;
        star2 -= 2;
    }
    return 0;
}
