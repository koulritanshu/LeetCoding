#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = 0;
        int c = matrix[0].size() - 1;
        int rows = matrix.size();
        int columns = matrix[0].size();
        while ((r>=0 && r<rows) && (c>=0 && c<columns)){
            if (matrix[r][c] > target){
                c--;
            }
            else if(matrix[r][c] < target){
                r++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution obj;
    int n; 
    cin >> n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }    
    int target;
    cin >> target;
    cout << obj.searchMatrix(v,target) << endl;
    return 0;
}