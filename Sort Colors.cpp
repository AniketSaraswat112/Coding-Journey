class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0, end = nums.size()-1, iterator = 0;
        while(iterator <= end){
            if(nums[iterator] == 0)
                swap(nums[iterator++], nums[start++]);
            else if(nums[iterator] == 2)
                swap(nums[iterator], nums[end--]);
            else if(nums[iterator] == 1)
                iterator++;
        }
    }
};