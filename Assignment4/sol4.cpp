#include<bits/stdc++.h>
using namespace std;

int addDigits(int num) {
    int sum =0;
    do{
    sum = 0;
    while(num>0){
        sum = sum + num%10;
        num = num / 10;
    }
    num = sum;
    }while(sum>=10);
    return num;
}

int main(){
    int a,ans;
    cin>>a;
    ans = addDigits(a);
    cout<<ans;
}
