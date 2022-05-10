#include <bits/stdc++.h>
using namespace std;

//Time complexity O(n)
vector<int>getPrimeFactors(int a){
    vector<int>Factors;
    for(int i=2;i<=sqrt(a);i++){
        //jb tk i se a divide hota rhega tb tk i ko Factors m push_back krta rhega
        while(a%i==0){
            Factors.push_back(i);
            a=a/i;
        }
    }
    if(a!=1){
        Factors.push_back(a);
    }
    return Factors;
}

int main(){
    int a= 2*2*2*3*3*7*13,sum=0;
    cout<<"number: "<<a<<"\n";
    vector<int>P = getPrimeFactors(a);
    cout<<"Factor: ";
    for(int i=0;i<P.size();i++){
      cout<<P[i]<<" ";
      sum += P[i];
    }
    cout<<'\n'<<sum<<'\n';
}