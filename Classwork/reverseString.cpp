#include<bits/stdc++.h>
using namespace std;

void revString(string &A){
    int n = A.length()-1;
    char temp;
    for (int i = 0;i<A.length()/2;i++){
        if(i==n-1) break;
        temp = A[i];
        A[i] = A[n-i];
        A[n-i] = temp;
        //swap(A[i],A[n-i]);
    }
}
int main()
{
    string A="Hello World";
    revString(A);
    
    for (int i = 0;i<A.length();i++){
        cout<<A[i];
    }
    return 0;
}