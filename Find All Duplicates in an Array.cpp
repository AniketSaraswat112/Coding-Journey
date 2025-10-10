class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        int maxNum = nums.size() + 1;
        for(int i = 0; i<nums.size(); i++){
            nums[nums[i]%maxNum-1] += maxNum;
        }

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > 2*maxNum)
                result.push_back(i+1);
        }

        return result;
    }
};