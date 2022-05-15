class Solution {
public:
    vector<int> sortArray(vector<int>& A) {
        int max = *max_element(A.begin(), A.end());
        int min = *min_element(A.begin(), A.end());
        int range = max - min + 1;
        int n = A.size();
        vector<int> B(range), C(n);
        for (int i = 0; i < n; i++)
            B[A[i] - min]++;
 
        for (int i = 1; i < range; i++)
            B[i] += B[i - 1];
 
        for (int i = n - 1; i >= 0; i--) {
            C[B[A[i] - min] - 1] = A[i];
            B[A[i] - min]--;
        }
        return C;
        
    }
};