class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        for(auto i=nums.begin(); i!= nums.end();  i++){
            auto j=find(i+1, nums.end(), target-*i);
            if(j!=nums.end()){
                result.push_back(i-nums.begin());
                result.push_back(j-nums.begin());
            }
        }
        return result;
    }
};