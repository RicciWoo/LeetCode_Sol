class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        if (nums.size() < 2) return result;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                result.push_back(i);
                result.push_back(map[complement]);
                return result;
            } else {
                map.insert(pair<int, int>(nums[i], i));
            }
        }
        return result;
    }
};