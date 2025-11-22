#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    char d,e;
    cin>>a>>d>>b>>e>>c;
    if(d=='+'){
        int ans = a+b;
        if(ans==c) cout<<"Yes\n";
        else cout<<ans;
    }
    else if(d=='-'){
         int ans = a-b;
        if(ans==c) cout<<"Yes\n";
        else cout<<ans;
    }
    else{
         int ans = a*b;
        if(ans==c) cout<<"Yes\n";
        else cout<<ans;
    }
    return 0;
}
