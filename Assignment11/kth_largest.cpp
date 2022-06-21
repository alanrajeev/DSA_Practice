vector<int>Array_sort(vector<int>&A)
{
    int max = *max_element(A.begin(), A.end());
        int min = *min_element(A.begin(), A.end());
        int range = max - min + 1;
        int n = A.size();
    vector<int>B(range),c(n);
    for(int i=0;i<n;i++)
    {
        B[A[i]-min]++;
    }
    for(int i=1;i<range;i++)
    {
        B[i] +=B[i-1];
    }
    for(int i=0;i<n;i++)
    {
        c[B[A[i]-min]-1]=A[i];
        B[A[i]-min]--;
    }
    return c;
    
}
class Solution {
public:
    int findKthLargest(vector<int>& B, int k) {
        B=Array_sort(B);
        return(B[B.size()-k]);
    }
};