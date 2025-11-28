#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void divisor(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0) cout<<i<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    divisor(n);
    return 0;
}
