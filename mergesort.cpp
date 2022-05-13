#include <bits/stdc++.h>
using namespace std;

vector <int> merge(vector <int> a,vector <int> b){
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
void MergeSort(vector<int>& v, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		MergeSort(v, start, mid);
		MergeSort(v, mid + 1, end);
	vector <int> v1(mid - start + 1);
	vector <int> v2(end - mid);
	copy(v.begin() + start, v.begin() +mid+1,v1.begin());
	copy(v.begin() +mid, v.end(),v2.begin());
	v = merge(v1,v2);
	}
}

int main() {
    vector <int> g1{7,2,1,8,9};
    int n = g1.size();
    MergeSort(g1,0,n);
    for(int i = 0; i<n;i++) {
        cout<<g1[i]<<" ";
    }
    
    cout<<endl;
}