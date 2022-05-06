#include<bits/stdc++.h>
using namespace std;
#define int long long

int main(){
    int a,rev = 0,op =1;
    cin>>a;
    if (a<0){
        op = -1;
        a = abs(a);
    }
    while(a>0){
        rev = rev*10 + a%10;
        a = a/10;
    }
    cout<<rev*op<<endl;
    return 0;
}