#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // map<vector<int>,int>mp;

    // vector<int>v;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(7);
    // v.push_back(9);
    // v.push_back(0);

    // mp[v]=5;

    // for(auto [x,y] : mp){
    //     vector<int>c =x;
    //     for(auto val:x){
    //         cout<<val<<" "<<y<<'\n';
    //     }
    //     cout<<y;
    //     // vector<int> c = x;
    //     // for(auto value : c){
    //     //     cout<<value<< " ";
    //     // }
    //     // cout<<'\n';
    //     // cout<<" "<<y<<'\n';
    // }


    map<int,int>mp;
    mp[0]=1;
    mp[1]=7;
    mp[3] = 5;
    mp[2] =10;
    for(auto [x,y]:mp){
        cout<<x<<"->"<<y<<'\n';
    }

    return 0;
}