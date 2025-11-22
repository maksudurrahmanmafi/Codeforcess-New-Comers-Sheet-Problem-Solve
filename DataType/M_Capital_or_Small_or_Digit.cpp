#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c;
    cin>>c;
    if(c>='A'&&c<='Z') cout<<"ALPHA\nIS CAPITAL";
    else if(c>='a'&&c<='z') cout<<"ALPHA\nIS SMALL";
    else cout<<"IS DIGIT";
    return 0;
}
