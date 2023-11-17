//	282A - Bit++

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int o=0;
    while(n--){
        string u="";
        cin>>u;
        if(u=="++X" || u=="X++")o++;
        if(u=="--X" || u=="X--")o--;
    }
    cout<<o;
}