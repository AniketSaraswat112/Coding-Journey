class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int result = 0, sum = 0;
        unordered_map<int,int> umap;

        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            int mod = (sum % k + k) % k;
            result += umap[mod];
            if(sum%k == 0) result ++;
            umap[mod]++;
        }

        return result;
    }
};