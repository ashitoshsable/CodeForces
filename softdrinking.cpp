//	151A - Soft Drinking

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long long int ya,yb,yc;
    ya=(k*l)/nl;
    yb=(c*d);
    yc=(p/np);
    cout<<(min(min(ya,yb),yc)/n);
}