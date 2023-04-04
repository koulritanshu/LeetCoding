#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//     vector<int> result;
//     int l = 0;
//     int r = nums.size()-1;
//     while (l<=r){
//         int mid = l + ((r-l)/2);
//         if(nums[mid]==target){
//             int i = mid;
//             while (i >= 0 && nums[i] == target){
//                 i--;
//             }
//             result.push_back(i+1);
//             int j = mid;
//             while (j<nums.size() && nums[j] == target){
//                 j++;
//             }
//             result.push_back(j-1);
//             return result;
//         }
//         else if(nums[mid] > target){
//             r = mid - 1;
//         }
//         else if(nums[mid] < target){
//             l = mid + 1;
//         }
//     }
//     return {-1,-1};
//     }
// };

class Solution{
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int l = 0;
        int r = nums.size()-1;
        int res = -1;
        while (l<=r){
            int mid = l + ((r-l)/2);
            if(nums[mid]==target){
                res = mid;
                r = mid - 1;
            }
            else if(nums[mid] > target){
                r = mid - 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
        }
        result.push_back(res);
        l = 0;
        r = nums.size()-1;
        int res1 = -1;
        while (l<=r){
            int mid = l + ((r-l)/2);
            if(nums[mid]==target){
                res1 = mid;
                l = mid + 1;
            }
            else if(nums[mid] > target){
                r = mid - 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
        }
        result.push_back(res1);
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int> v = {12,24};
    int t = 12;
    vector<int> x = obj.searchRange(v,t);
    for(auto &value: x){
        cout << value << " ";
    }
    cout << endl;
    return 0;
}

