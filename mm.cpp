#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> product(vector<vector<int>>A, vector<vector<int>>B){
    vector<vector<int>> c;
    int i,j,k,x;
    for(i=0;i<A.size();i++){
        vector<int> row;
        for(j=0;j<B[0].size();j++){
            x=0;
            for(k=0;k<B.size();k++){
                x += A[i][k]*B[k][j]; 
            }
            row.push_back(x);
        }
        c.push_back(row);
    }  
    return c; 
}

int main() {
    int m,p,n,x;
    vector<vector<int>> a,b,c;
    cin>>m;
    cin>>n;
    cin>>p;
    for (int i = 0; i < m; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++)
        {
            cin>>x;
            row.push_back(x);
        } 
        a.push_back(row);  
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < p; j++)
        {
            cin>>x;
            row.push_back(x);
        } 
        b.push_back(row);  
    }   
    c = product(a,b); 
    for (int i = 0; i < c.size(); i++)
    {
        for (int j = 0; j < c[i].size(); j++)
        {
            cout << c[i][j] << " ";
        }   
        cout << endl;
    }
    return 0;
}