#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a) {
    bool ans=true;
    int b = sqrt(a);
    for (int i = 0;i<b;i++){
        if(a%i == 0){
            ans = false;
        }
    }
    return ans;
}

int main() {
    int a;
    bool res;
    cin>>a;
    res = isPrime(a);
    if  (res){
        cout<<a<<"is Prime";
    }
    else {
        cout<<a<<"is not Prime";
    }
}