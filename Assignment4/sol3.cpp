#include<bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int x) {
    long long sum = 0,product = 1;
    if (x<0){
        x = abs(x);
    }
    while(x>0){
        sum = sum + x%10;
        product = product*(x%10);
        x = x/10;
    }
    return product-sum;  
}   

int main(){
    int a,ans;
    cin>>a;
    ans = subtractProductAndSum(a);
    cout<<ans;
}