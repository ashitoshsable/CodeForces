//A. Chewbaсca and Number

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    vector<int> ans;
    while(n>0){
        ans.push_back(n%10);
        n/=10;
    }
    reverse(ans.begin(),ans.end());
    
    for(int i=0;i<ans.size();i++){
        if(ans[i]>=5){
            if(i==0 && ans[i]==9)ans[i]=ans[i];
            else ans[i]=9-ans[i];
        }
    }
    
    long long int res=0;
    for(int i=0;i<ans.size();i++){
        res=res*10+ans[i];
    }
    cout<<res;
}