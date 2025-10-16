class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int sum = 0, result = 0;

        umap[0]++;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            int find = sum - k;
            result += umap[find];
            umap[sum]++;
        }
        return result;
    }
};