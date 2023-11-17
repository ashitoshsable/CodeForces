//158A - Next Round

#include<bits/stdc++.h>
using namespace std;

int func(vector<int> &ans,int k){
    int count=0;
    int ith=ans[k-1];
    for(int i=0;i<ans.size();i++){
        if(ans[i]>=ith && ans[i]>0)count++;
    }
    return count;
    
}

int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int> ans;
    while(n--){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    int count=func(ans,k);
    cout<<count<<endl;
}