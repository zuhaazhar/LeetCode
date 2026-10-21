class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)
                continue;
            else
                arr.push_back(nums[i]);
        }
        int k=arr.size();
        for(int i=0;i<k;i++){
            nums[i]=arr[i];
        }
        return k;
    }
};