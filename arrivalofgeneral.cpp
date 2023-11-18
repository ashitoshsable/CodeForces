//144A - Arrival of the General

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> ans;
    int k=n;
    while(k--){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    int comp=INT_MAX;
    int si=-1;
    for(int i=0;i<n;i++){
        if(ans[i]<=comp){
            comp=ans[i];
            si=i;
        }
    }
    comp=INT_MIN;
    int li=-1;
    for(int i=n-1;i>=0;i--){
        if(ans[i]>=comp){
            comp=ans[i];
            li=i;
        }
    }
    
    if(si<li){
        cout<<abs(n-si-1)+abs(li)-1;
    }
    else cout<<abs(n-1-si)+abs(li);
}