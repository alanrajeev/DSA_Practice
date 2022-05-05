#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,rev = 0;
    cin>>a;
    while(a>0){
        rev = rev*10 + a%10;
        a = a/10;
    }
    cout<<rev;
}