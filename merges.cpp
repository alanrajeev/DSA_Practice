#include <bits/stdc++.h>
using namespace std;

vector <int> merges(vector <int> a,vector <int> b){
    vector <int> c;
    int i = 0,j = 0;
    while(i<a.size()&& j<b.size()){
        if(a[i]<=b[j]){
            c.push_back(a[i]);
            i++;            
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }
    while (i<a.size()){
        c.push_back(a[i]);
        i++;
    }
    while (j<b.size()){
        c.push_back(b[j]);
        j++;
    }
    return c;
}

int main() {
    vector<int> g1,g2,g3;
    int a,n,m;
    cin>>n;
    cin>>m;
    for(int i = 0;i<n;i++) {
        cin>>a;
        g1.push_back(a);
    }
    for(int i = 0;i<m;i++) {
        cin>>a;
        g2.push_back(a);
    }
    g3 = merges(g1,g2);
    for(int i = 0; i<g3.size();i++) {
        cout<<g3.at(i)<<" ";
    }
    cout<<endl;
}