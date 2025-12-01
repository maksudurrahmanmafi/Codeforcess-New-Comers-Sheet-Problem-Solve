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
        int x, y;
        cin >> x >> y;
        if (x > y)
            swap(x, y);

        int sum = 0;
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout<<sum<<'\n';
    }
    return 0;
}
