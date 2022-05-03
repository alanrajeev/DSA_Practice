#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> A = {8,3,4,5,6,3};
    int n = A.size();
    int max_number = INT_MIN;
    for(int i = 0;i<n;i++){
        if(A[i]>max_number) {
            max_number = A[i];
        }
    }
}
