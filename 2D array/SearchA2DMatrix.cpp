// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        cout << "Row = " << row << endl;
        int column = matrix[0].size();
        cout << "Column = " << column << endl;
        if(target > matrix[row-1][column-1]) return false;
        if (target < matrix[0][0]) return false;

        int r;
        for(int i=0;i<row;i++){
            if (target <= matrix[i][column-1]){
                r = i;
                break;
            }
        }
        
        cout << "Value of r = " << r << endl;

        for(int i=0;i<column;i++){
            if(matrix[r][i] == target) return true;
        }
        return false;
    }
};


int main()
{
    int r,c;
    cin >> r >> c;
    // int arr[r][c];
    vector<vector<int>> v;
    for(int i=0;i<r;i++){
        vector<int> temp;
        for(int j=0;j<c;j++){
            // cin >> arr[i][j];
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    int target;
    cin >> target;
    // if(target>arr[r-1][c-1] || target < arr[0][0]) cout << -1 << endl;

    // int row;

    // for(int i=0;i<r;i++){
    //     if(target <= arr[i][c-1]){
    //         row = i;
    //         break;
    //     }
    // }
    // cout << "Value of row = " << row << endl;
    // int present = 0;
    // for(int i=0;i<c;i++){
    //     if(arr[row][i]==target){
    //         present = 1;
    //         cout << "Element found at " << row << " " << i << endl;
    //         break;
    //     }
    // }

    // if(!present) cout << -1 << endl;   

    Solution obj;
    cout << obj.searchMatrix(v,target);
    return 0;
}