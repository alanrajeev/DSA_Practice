class Solution {
public:
    int guessNumber(int n) {
        long long start = 1,end = n,mid,res;
        while(start<=end){
            mid = (start + end)/2;
            res = guess(mid);
            if(res==0) return mid;
            else if(res<0) end = mid - 1;
            else start = mid + 1;
        }
        return -1;
    }
};