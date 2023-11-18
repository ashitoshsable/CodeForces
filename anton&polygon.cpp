//785A - Anton and Polyhedrons

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
    while(n--){
        string a="";
        cin>>a;
        if(a=="Icosahedron")count+=20;
        else if(a=="Dodecahedron")count+=12;
        else if(a=="Octahedron")count+=8;
        else if(a=="Cube")count+=6;
        else count+=4;
    }
    cout<<count;
}