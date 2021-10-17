/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

// Runtime: 4ms
// Memory Usage: 9.7 MB

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int offset = 0;
        int size = nums.size();
        if(nums.at(nums.size() / 2) < target) {
            i = nums.size() / 2;
        }
        else if(nums.at(nums.size() / 2) > target) {
            i = 0;
            size = nums.size() / 2;
        }
        else {
            return nums.size() / 2;
        }
        for(; i < size; i++) {
            if(nums.at(i) == target) {
                return i;
            }
            else if(i + 1 == size) {
                if(nums.at(i) < target) {
                    return i + 1;
                }
            }
            // Check Left and Right to Have Target in Between (?!)
            else if (nums.at(i) < target && nums.at(i + 1) > target) {
                return i + 1;
            }
        }
        return 0;
    }
};
