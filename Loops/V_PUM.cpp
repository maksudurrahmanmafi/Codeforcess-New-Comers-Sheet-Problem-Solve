#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 4 * n; j++)
        {
            if (j % 4 == 0){

                cout << "PUM\n";
            }
            else{

                cout << j<<" ";
            }
        }
        return 0;
    }
    return 0;
}
