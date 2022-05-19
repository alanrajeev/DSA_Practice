class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        long start = 0;
        long end = n;
		
        while(start<=end){
            long mid = end + (start - end)/2;
            
            long num = (mid*(mid+1))/2;
            
            if(n == num){
                ans =  mid;
                return ans;
            }
            
            else if(n < num){
                ans = mid -1;
                end = mid - 1;
            }
            
            else if(n > num){
                start = mid+1;
            }
        }
        return ans;
    }
};