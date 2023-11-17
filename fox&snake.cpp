// 510A - Fox And Snake

#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int flag=0;
    int f2=0;
    while(m!=0){
        if(flag==1 && f2==0 && m!=0){
            for(int i=0;i<n-1;i++){
                cout<<'.';
            }
            cout<<'#'<<endl;
            f2=1;
            flag=0;
            m--;
        }
        if(flag==1 && f2==1 && m!=0){
            cout<<'#';
            for(int i=1;i<n;i++){
                cout<<'.';
            }
            cout<<endl;
            f2=0;
            flag=0;
            m--;
        }
        if(flag==0 && m!=0){
            for(int i=0;i<n;i++){
                cout<<'#';
            }
            cout<<endl;
            flag=1;
            m--;
        }
    }
}