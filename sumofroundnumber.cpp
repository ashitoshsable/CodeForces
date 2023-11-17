//1352A - Sum of Round Numbers

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> ans;
    while(n--){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    vector<vector<int>> uu;
    for(int i=0;i<ans.size();i++){
        int count=0;
        vector<int> temp;
        int req=0;
        while(ans[i]!=0){
            if(ans[i]%10!=0){
                int tr=ans[i]%10;
                for(int i=0;i<req;i++){
                    tr=tr*10;
                }
                temp.push_back(tr);
            }
            ans[i]/=10;
            req++;
        }
        uu.push_back(temp);
    }
    for(int i=0;i<uu.size();i++){
        cout<<uu[i].size()<<endl;
        for(int j=0;j<uu[i].size();j++){
            cout<<uu[i][j]<<' ';
        }
        cout<<endl;
    }
}