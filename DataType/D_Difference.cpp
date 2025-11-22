#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = (a*b)-(c*d);
    cout<<"Difference = "<<ans;
    return 0;
}
