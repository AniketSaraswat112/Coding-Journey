class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr = -101, currIndex = 0, count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == curr)
                continue;
            nums[currIndex++] = nums[i];
            curr = nums[i];
            count++;
        }
        return count;
    }
};