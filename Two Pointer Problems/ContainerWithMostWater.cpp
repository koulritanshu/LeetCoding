// Medium level problem
// We basically have to find the rectangle with the largest area
// So brute force will result in TLE

// BRUTE FORCE

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int max_area = INT_MIN;
//         for(int left = 0; left < n; left++){
//             for(int right = left + 1; right < n; right++){
//                 max_area = max(max_area, (min(height[left],height[right]))*(right-left));
//             }
//         }
//         return max_area;
//     }
// };

// For optimized approach we will use two pointers
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int curr_area = 0;
        int maximum_area = INT_MIN;
        while (left < right){
            curr_area = (right - left)*min(height[left],height[right]);
            maximum_area = max(maximum_area, curr_area);
            if (height[left] <= height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maximum_area;
    }
};

int main()
{
    Solution obj;
    vector<int> v = {1,8,6,2,5,4,8,3,7};
    cout << obj.maxArea(v) << endl; 
    return 0;
}