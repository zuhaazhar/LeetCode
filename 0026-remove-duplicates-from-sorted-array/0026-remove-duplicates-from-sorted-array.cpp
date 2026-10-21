class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            if(i==0||nums[i]!=nums[i-1])
                arr.push_back(nums[i]);
        }
        int k=arr.size();
        for(int i=0;i<k;i++){
            nums[i]=arr[i];
        }
        return k;
    }
};