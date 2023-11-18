//136A - Presents

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int k=n;
    vector<int> ans;
    while(k--){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    int arr[n]={0};
    for(int i=0;i<ans.size();i++){
        arr[ans[i]-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}