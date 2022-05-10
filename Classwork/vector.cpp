#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> g1;
    int a;
    for(int i = 0;i<5;i++) {
        cin>>a;
        g1.push_back(a);
    }
    for(int i = 0; i<g1.size();i++) {
        cout<<g1.at(i)<<endl;
    }
}