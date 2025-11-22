#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans =n/1000;
    if(ans%2==0) cout<<"EVEN";
    else cout<<"ODD";
    return 0;
}
