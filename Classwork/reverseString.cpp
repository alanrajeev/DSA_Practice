#include<bits/stdc++.h>
using namespace std;

void revString(string &A){
    int n = A.length()-1;
    for (int i = 0;i<A.length()/2;i++){
        if(i==n-1) break;
        swap(A[i],A[n-i]);
    }
}
int main()
{
    string A="Hello World";
    revString(A);
    for (int i = 0;i<A.length();i++){
        cout<<A[i];
    }
}