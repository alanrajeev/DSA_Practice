#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b>a) swap(a,b);
    int r = a%b;
    while(r!=0){
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}

int main() {
    int a,b,g;
    cin>>a>>b;
    g = gcd(a,b);
    cout<<g<<endl; 
    return 0;
}