#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a,b;
    cin>>a>>b;
    double x = a/b;
    cout<<"floor "<<a<<" / "<<b <<" = "<<floor(x)<<'\n';
    cout<<"ceil "<<a<<" / "<<b <<" = "<<ceil(x)<<'\n';
    cout<<"round "<<a<<" / "<<b <<" = "<<round(x)<<'\n';
    return 0;
}
