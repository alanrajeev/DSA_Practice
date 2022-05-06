#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int op = 1;
    long long rev = 0;
    if (x<0){
        op = -1;
        x = abs(x);
    }
    while(x>0){
        rev = rev*10 + x%10;
        x = x/10;
    }
    if (rev>INT_MAX){
        return 0;
    }
    return rev*op;  
}
int main(){
    int a;
    cin>>a;
    cout<<reverse(a)<<endl;
    return 0;
}