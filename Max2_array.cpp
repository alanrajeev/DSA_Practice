#include <bits/stdc++.h>
using namespace std;
void printTwoMax(vector<int>A){
    int a = A[0],b = INT_MIN,l = A.size();
    for (int i =1;i<l;i++){
        if (a>A[i]){
            b = A[i]
        }
    }
    cout<<a<<" "<<b<<endl;
}
int main() {
    vector<int> g1 = {8,3,4,5,6,3};
    printTwoMax(g1);
}
