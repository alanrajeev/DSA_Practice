#include<bits/stdc++.h>
using namespace std;

void revString(string &A){
    int n = A.size()-1;
    char temp;
    for (int i = 0;i<A.size()/2;i++){
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
    
    for (int i = 0;i<A.size();i++){
        cout<<A[i];
    }
    cout<<"\n";
    return 0;
}