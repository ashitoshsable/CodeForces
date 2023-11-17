//263A - Beautiful Matrix

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=5,m=5;
    int x=0,y=0;
    int flag=1;
    vector<vector<int>> ans;
    while(n-- && flag){
        vector<int> temp;
        m=5;
        while(m--){
            int o;
            cin>>o;
            if(o!=0){
                x=n;
                y=m;
                flag=0;
                break;
            }
            temp.push_back(o);
        }
        ans.push_back(temp);
    }
    cout<<abs(x+1-3)+abs(y+1-3);
    
}