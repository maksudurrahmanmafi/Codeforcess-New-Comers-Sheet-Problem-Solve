#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='+'){
        cout<<a+b;
    }
    else if(c=='-') cout<<a-b;
    else if(c=='*') cout<<a*b;
    else cout<<a/b;
    return 0;
}
