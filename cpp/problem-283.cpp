/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

// Runtime: 8 ms
// Memory Usage: 8.8 MB

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_counter = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums.at(i) == 0) {
                nums.erase(nums.begin() + i);
                zero_counter++;
                i--;
            }
        }
        while(zero_counter > 0) {
            nums.push_back(0);
            zero_counter--;
        }
    }
};
