class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int lo = 0, hi = n-1, mid;
        while(lo <= hi){
            mid = lo + (hi-lo)/2;
            bool left = false, right = false;
            int l = mid-1, r = mid+1;
            if(l >=0 && nums[l] == nums[mid]){
                left = true;
            }
            if(r<n && nums[r] == nums[mid]){
                right = true;
            }
            
            if(!left && !right)
                return nums[mid];
            
            if(left){
                if(mid%2 == 0)
                    hi = mid-1;
                else
                    lo = mid+1;
            }
            else{
                if(mid%2 ==0)
                    lo = mid+1;
                else
                    hi = mid-1;
            }
            
        }
    }
};
