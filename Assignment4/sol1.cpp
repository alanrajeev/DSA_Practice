#include<bits/stdc++.h>
using namespace std;

void revString(vector<char>& a) {
        int n = a.size();
        for (int i = 0;i<n/2;i++)
            swap(a[i],a[n-1-i]);   
        }
int main()
{
    vector<char> A{'h','e','l','l','o'};
    revString(A);
    
    for (int i = 0;i<A.size();i++){
        cout<<A[i];
    }
    cout<<"\n";
    return 0;
}