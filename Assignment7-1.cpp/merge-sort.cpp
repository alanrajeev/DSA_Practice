class Solution {
public:
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
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        MergeSort(nums,0,n-1);
        return nums;
    }
};