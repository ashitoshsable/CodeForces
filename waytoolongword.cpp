//A. Way Too Long Words

#include<bits/stdc++.h>
using namespace std;
 
void func(string str){
    if(str.size()<=10)cout<<str<<endl;
    else if(str.size()>4){
        string res="";
        res+=str[0];
        int o=str.size()-2;
        int a=o%10;
        o/=10;
        int b=o%10;
        if(b!=0)res+=char(b+48);
        res+=char(a+48);
        res+=str[str.size()-1];
        cout<<res<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        func(str);
    }
}