/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

// Runtime: 28 ms
// Memory Usage: 19.7 MB

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>tests;
        int half = nums.size() / 2;
        for(int i = 0; i < nums.size(); i++) {
            if(tests.count(nums.at(i)) == 0) {
                tests[nums.at(i)] = 1;
            }
            else {
                tests[nums.at(i)] = tests[nums.at(i)] + 1;
            }
        }
        for(std::map<int, int>::iterator it = tests.begin(); it != tests.end(); ++it) {
            if(it->second > half) {
                return it->first;
            }
        }
        return 0;
    }
};

// Majority Element: n / 2 times
// Every other element appears less than n / 2 times??

// if numquantity > half 
// return num
// else return other num

// What if...
// Split array in half
// Search Both halves for anything ( n / 2 ) / 2
// Recursively do
