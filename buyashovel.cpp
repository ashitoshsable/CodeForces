//732A - Buy a Shovel

#include<bits/stdc++.h>

using namespace std;

int main(){
    int k,r;
    cin>>k;
    cin>>r;
    int i=2;
    int count=167;
    while(1){
        int res=k;
        if(res%10==0 || res%10==r){break;}
        res*=i;
        count++;
        if(res%10==0 || res%10==r){break;}
        i++;
    }
    cout<<count<<endl;
}