/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
*/

// Runtime: 0 ms
// Memory Usage: 6.3 MB

class Solution {
public:
    bool isValid(string s) {
        // Use Stack Data Structure
        stack<char>cs;
        // Loop Through String
        for(int i = 0; i < s.size(); i++) {
            // Check for Open Comments
            if(s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{' ) {
                cs.push(s.at(i));
                continue;
            }
            // Check if Closed
            if(s.at(i) == ')' || s.at(i) == ']' || s.at(i) == '}') {
            // Check if Stack is Empty (Means Closed Did Not Exist)
                if(cs.empty()) {
                    return false;
                }
            // Matching Checks
                if(cs.top() == '(' && s.at(i) != ')') {
                    return false;
                }
                if(cs.top() == '[' && s.at(i) != ']') {
                    return false;
                }
                if(cs.top() == '{' && s.at(i) != '}') {
                    return false;
                }
                else {
                    cs.pop();
                }
            }
        }
        // If Stack Didn't Match Pairs
        if(!cs.empty()) {
            return false;
        }
        return true;
    }
};


// When is it false
// If s.size() is odd
// If a closed comes before its open partner
// If open never has a closed
//


// Check one character
// If open, then check next character, and if thats closed return true
// If closed, return false
// If mismatched return false


// ([])


//{{{{{{{{[[[((((((((((([[[[[[[[[[[(((((((({{{{{{{[]}}}}}}}))))))))]]]]]]]]]]])))))))))))]]]}}}}}}}}

// Six Counters
// Open / Closed Parentheses, Open / Closed
// If Its an Open or Closed Variant, Increase That Counter
// Check if Odd / Even


// }}}}

// }{

// ([)] s.find(), will find it, but in wrong order
