#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int>Prime;
void Seive(){
    int Max=2e5+5;
    vector<bool>isPrime(Max,1);
    isPrime[1]=0;
    for(int i=2;i<Max;i++){
        if(!isPrime[i]) continue;
        Prime.push_back(i);
        for(int j=i*i;j<Max;j+=i) isPrime[j]=0;
    }
}

signed main() {
    Seive();
    int n,count = 0;
    cin>>n;
    for(int a:Prime){
        if(a>=n) {
            break;
        }
        count++;
    }
    cout<<count<<"\n";
}