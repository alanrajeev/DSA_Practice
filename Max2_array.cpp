#include <bits/stdc++.h>
using namespace std;
void printTwoMax(vector<int>A){
    int l = A.size();
    sort(A.begin(),A.end());
    int a = A[l-1],b;
    for(int i = l-2; i>=0; i--){
        if (A[i] != A[i+1]){
            b = A[i];
            break;
        }
    }
    cout<<a<<" "<<b<<endl;
}
int main() {
    vector<int> g1 = {2,3,4,5,6,6};
    printTwoMax(g1);
}