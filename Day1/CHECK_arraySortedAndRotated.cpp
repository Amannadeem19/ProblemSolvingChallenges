https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/solutions/4018135/check-if-array-is-sorted-and-rotated/


class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 1; i < n; i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        // check last element with the first element 
        if(nums[n-1] > nums[0]){
            count++;
        }

        return count <= 1;
    }
};
