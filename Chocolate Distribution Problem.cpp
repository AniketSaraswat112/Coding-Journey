class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(), a.end());
        int result = INT_MAX;
        for(int i = 0; i<a.size()-m+1; i++){
            result = min(result, a[i+m-1] - a[i]);
        }
        return result;
    }
};