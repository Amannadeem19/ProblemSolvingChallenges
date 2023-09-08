https://leetcode.com/problems/rotate-array/solutions/4018060/rotate-array-to-k-times/

//(i+k)%nums.size() this formula always return the value from 0-9


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());

        for(int i = 0; i < nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];

        }
        nums = temp;
    }
};
