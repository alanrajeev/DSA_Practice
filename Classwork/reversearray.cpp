#include<bits/stdc++.h>
using namespace std;

void reverse(vector <int>&a){
    int n = a.size();
    for (int i = 0;i<n/2;i++){
        swap(a[i],a[n-1-i]);
    }
}

int main(){
    vector<int>A{1,2,3,4,5,6};
    reverse(A);
    for (int i=0;i<A.size();i++){
        cout<<A[i];
    }
    return 0;
}