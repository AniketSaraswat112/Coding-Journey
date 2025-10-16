class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int currElement = nums[0], freq = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == currElement) freq++;
            else freq--;

            if(freq == 0)
                currElement = nums[i], freq++;
        }
        return currElement;
    }
};