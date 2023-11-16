//	231A - Team

#include<bits/stdc++.h>
using namespace std;

int func(vector<vector<int>> &ans){
    int count=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i][0]==1 && ans[i][1]==1 
            || ans[i][2]==1 && ans[i][1]==1 
            || ans[i][0]==1 && ans[i][2]==1){
            count++;
        }
    }
    return count;
    
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans;
    int a=0,b=0,c=0;
    while(n--){
        cin>>a;
        cin>>b;
        cin>>c;
        ans.push_back({a,b,c});
    }
    int count=func(ans);
    cout<<count<<endl;
}