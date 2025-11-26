#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y<2){
            cout<<0<<'\n';
            continue;
        }
        else{
            int ans =y/2;
            if(x>=ans){
                cout<<ans+(2*ans)<<'\n';
            }
            else{
                ans= x;
                cout<<ans+(2*ans)<<'\n';
                
            }
        }
    }

}
