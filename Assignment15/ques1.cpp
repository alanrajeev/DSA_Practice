class Solution {
private:
    int lower_bound(vector<int>& nums, int x) {
        int n = nums.size();
        int lo = 0, hi = n - 1, first_pos = n;
        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            if(nums[mid] >= x) {
                first_pos = mid;
                hi = mid - 1;
            }else {
                lo = mid + 1;
            }
        }
        return first_pos;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first_pos = lower_bound(nums, target);
        int second_pos = lower_bound(nums, target+1);
        if(first_pos <= (second_pos-1)) return {first_pos, second_pos-1};
        return {-1,-1};
    }
};