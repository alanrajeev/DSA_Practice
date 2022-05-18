class Solution {
public:
    bool isPerfectSquare(int x) {
        long long start = 1,end = x,ans,mid;
        while(start<=end){
            mid  = (start + end)/2;
            if(mid*mid==x){
                return true;
            }
            else if(mid*mid<x){
                start = mid+1;
            }   
            else {
                end = mid - 1;
            }
        }
        return false;
    }
};