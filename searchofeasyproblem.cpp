//1030A - In Search of an Easy Problem

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int flag=0;
    while(n--){
        int a;
        cin>>a;
        if(a==1){flag=1;}
    }
    if(flag==0)cout<<"EASY";
    else cout<<"HARD";
}