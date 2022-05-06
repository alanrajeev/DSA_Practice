#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    int y=x;
    long long rev=0;
    if(x<0){
        return false;
    }
    while(y>0){
        rev = rev*10 + y%10;
        y = y/10;
    }
    if(x==rev){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(isPalindrome(n)){
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
}

