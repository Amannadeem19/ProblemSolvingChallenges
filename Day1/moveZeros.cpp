https://leetcode.com/problems/move-zeroes/solutions/4017974/move-zeros/



class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int point = 0;
        for(int i = 0; i < nums.size(); i++){

            if(nums[i] != 0){
                swap(nums[point], nums[i]);
                point++;
            }
        }
        
    }
};
