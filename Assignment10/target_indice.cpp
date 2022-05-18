class Solution {
public:
    vector<int> targetIndices(vector<int>& a, int target) {
        int low = 0;
        int high = a.size()-1;
        int mid;
        int n = a.size();
        sort(a.begin(),a.end());
        vector <int> ans;
        while(low <= high){
            mid = (low + high) / 2;
            if(a[mid] == target) {
                ans.push_back(mid);
                int left, right;
                for(int i = 1; i < n; i++)
                {
                    left = mid - i;
                    right = mid + i;
                    if(right < n)
                    {
                        if(a[right] == target)
                            ans.push_back(right);
                    }
                    
                    if(left >= 0)
                    {
                        if(a[left] == target)
                            ans.push_back(left);
                    }
                }
                break;
            }
            else if(a[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};