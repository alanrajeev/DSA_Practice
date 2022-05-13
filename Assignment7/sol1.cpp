#include <bits/stdc++.h>
using namespace std;

void insert_sort(int n, vector<int> A){
    int min = A[n-1];
    for (int i=n-2;i>=0;i--){
        if(A[i]>min){
            A[i+1] = A[i];
        }
        else{
            A[i+1] = min;
            break;
        }
        for(int i=0;i<A.size();i++){
             cout<<A[i]<<" ";
            } 
        cout<<endl;
        if(i==0){
           A[0]=min; 
        }
    }
    for(int i=0;i<A.size();i++){
             cout<<A[i]<<" ";
            } 
        cout<<endl;
}
int main() {
    int n,a;
    vector<int> v;
    cin>>n;
    for(int i = 0;i<n;i++) {
        cin>>a;
        v.push_back(a);
    }
 
    insert_sort(n,v);
    return 0;
}
