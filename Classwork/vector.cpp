#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int a;
    for(int i = 0;i<5;i++) {
        cin>>a;
        v.push_back(a);
    }
    int start = 0,mid,end = v.size();
    mid = (start+end)/2;
    vector <int> v1(mid - start + 1);
	vector <int> v2(end - mid - 1);
	copy(v.begin() + start, v.begin() +mid+1,v1.begin());
	copy(v.begin() +mid+1, v.end(),v2.begin());
    for(int i = 0; i<v1.size();i++) {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
    for(int i = 0; i<v2.size();i++) {
        cout<<v2.at(i)<<" ";
    }
    cout<<endl;
}
