class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int hi=nums.size()-1, lo=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
                lo=mid+1;
            else
                hi=mid-1;
        }
        return lo;
    }
};