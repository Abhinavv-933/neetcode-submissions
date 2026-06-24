class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        unordered_set<int> seen;
        bool found = false;
        for(int i=0;i<n;i++){
            if(seen.count(nums[i]) >= 1){
                found = true;
                break;
            }
            seen.insert(nums[i]);
        }
        return found;
    }
};