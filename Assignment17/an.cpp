#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    for(int i=0;i<A.size();i++) {
        if(A[i]==target)
            return true;
    }
    return false;
}
bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    for(int i=0;i<A.size();i++) {
        for(int j=0;j<A[0].size();j++) {
            if(A[i][j]==target)
            return true;
        }
    }
    return false;
}
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    for(int i=0;i<A[0].size();i++){
        if(A[r][i]==target) return true;
    }
    return false;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    for(int i=0;i<A.size();i++) {
        if(A[i][c]==target)
        return true;
    }    
    return false;
}


int main() {
    vector<int> x = {1,2,3};
    if(isTargetPresent(x,3))
        cout<<"Target is present"<<endl;
    else
        cout<<"Target is not present"<<endl;
    vector<vector<int>>A={{1,2,3} , {4,5,6},{7,8,9}};
    if(isTargetPresentIn2DVector(A,5))  
        cout<<"Target is present in 2D array"<<endl;
    else 
        cout<<"Target is not present in 2D array"<<endl;

    if(isTragetPresentInCol(A,4,2))
        cout<<"Target is present in the specified column"<<endl;
    else
        cout<<"Target is not present in the specified column"<<endl;   
    if(isTragetPresentInRow(A,5,1))
        cout<<"Target is present in the specified row"<<endl;
    else
        cout<<"Target is not present in the specified row"<<endl;
    return 0;   
}