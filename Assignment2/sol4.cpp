#include <iostream>

using namespace std;


int main() {
     
    int n,A[1000],i;
    cin>>n;
   for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}