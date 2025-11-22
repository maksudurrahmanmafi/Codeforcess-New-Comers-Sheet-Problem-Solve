#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int a, b, c;
    cin >> a >> b >> c;
    int a1 = a;
    int b1 = b;
    int c1 = c;
 
    if (a > b)
    {
        swap(a,b);
    }
    if (a > c)
    {
       swap(a,c);
    }
    if (b > c)
    {
      swap(b,c);
    }
 
    cout << a << '\n'<< b << '\n' << c << '\n'<<'\n';

    cout << a1 << '\n'<< b1 << '\n'<< c1;
    return 0;
}
