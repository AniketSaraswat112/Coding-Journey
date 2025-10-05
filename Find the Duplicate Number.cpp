class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int hare = 0, tor = 0;
        while(true){
            hare = nums[nums[hare]];
            tor = nums[tor];
            if(hare == tor){
                break;
            }
        }

        tor = 0;
        while(tor != hare){
            tor = nums[tor];
            hare = nums[hare];
        }
        return hare;
    }
};