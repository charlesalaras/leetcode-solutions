/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/

// Runtime: 4ms
// Memory Usage: 7 MB

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
//        int placementIndex = n - 1;
        for(int i = 0; i < n; i++) { // Array Loop
            for(int j = (n - 1); j >= 0; j--) { // Element Loop
                if(j == i) { //
                    continue;
                }
                int insertNum = matrix.at(i).at(j); // Number to Be Inserted
                if(j < i) {
                    matrix.at(j).insert(matrix.at(j).begin(), insertNum); // PushFront Into Array
                }
                else {
                    matrix.at(j).insert(matrix.at(j).begin() + n, insertNum); // PushBack Into Array
                }
                matrix.at(i).erase(matrix.at(i).begin() + j); // Erase Original Element
            }
            
        }
    }
};

// Grab Each Row
// Replace Column with Row (Reverse Order)

// nth element stays in the nth array
// only difference is flipped position

// Issues:
// Insertion / Deletion Changes Array Size / Looping Index

