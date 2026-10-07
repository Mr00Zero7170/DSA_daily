class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;          
        seen.reserve(nums.size());             

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = seen.find(complement);
            if (it != seen.end()) {
                return {it->second, i};
            }
            seen[nums[i]] = i;
        }
        return {};                             
    }
};