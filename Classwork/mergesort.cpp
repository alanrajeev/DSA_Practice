#include <bits/stdc++.h>
using namespace std;

 void merge(vector<int>& v, int s, int m, int e){
    vector<int> b;
	int i=s, j=m+1;
	while (i <= m && j <= e) {
		if (v[i] <= v[j]) {
			b.push_back(v[i]);
			i++;
		}
		else {
			b.push_back(v[j]);
			j++;
		}
	}
	while (i <= m) {
		b.push_back(v[i]);
		i++;
	}
	while (j <= e) {
		b.push_back(v[j]);
		j++;
	}
	for (int i = s; i <= e; ++i)
		v[i] = b[i - s];
}
void MergeSort(vector<int>& v, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		MergeSort(v, start, mid);
		MergeSort(v, mid + 1, end);
        merge(v,start,mid,end);
	}
}

int main() {
    vector <int> g1{7,2,2,1,8,9,1};
    int n = g1.size();
    MergeSort(g1,0,n-1);
    for(int i = 0; i<n;i++) {
        cout<<g1[i]<<" ";
    }
    
    cout<<endl;
}