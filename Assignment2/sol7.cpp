#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    if (a <=1){
        return 0;
    }
    if (a <=3){
        return 1;
    }
    if (a%2==0||a%3==0){
        return 0;
    }
    for(int i=5;i*i<=a;i= i+6)
    {
        if(a%i==0||a%(i+1)==0)
            return 0;
    }   
    return 1;
}
int main() {
    for(int i=1;i<30;i++){
        if(i == 1){
            cout<<"the number "<<i<<" is co-prime\n";
        }
        else if (isPrime(i)){
            cout<<"the number "<<i<<" is prime\n";
        }
        else{
            cout<<"the number "<<i<<" is not prime\n";
        }   
    }
}