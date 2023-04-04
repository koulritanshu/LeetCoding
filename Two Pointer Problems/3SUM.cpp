// EXTREMELY INEFFICENT CODE
// Naive Approach = Nested Loops
// Better Apporach = Hash Maps
// Best Approach = Two Pointer using a logic that does not involve usage of sset
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>> s;
//         sort(nums.begin(),nums.end());
//         int curr;
//         for(int i=0;i<nums.size()-2;i++){
//             int l = i+1;
//             int r = nums.size() - 1;
//             curr = nums[i];
//             int sum = nums[l] + nums[r];
//             int should_be = 0 - curr;
//             while(l<r){
//                 sum = nums[l] + nums[r];
//                 if(sum == should_be){
//                     s.insert({nums[i],nums[l],nums[r]});
//                     l++;
//                     r--;
//                 }
//                 else if(sum < should_be){
//                     l++;
//                 }
//                 else{
//                     r--;
//                 }
//             }
//         }
//         vector<vector<int>> v;
//         for(auto &value: s){
//             v.push_back(value);
//         }
//         return v;
//     }
// };

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> v;
    sort(nums.begin(),nums.end());
    int curr;
    for(int i=0;i<nums.size()-2;i++){
        if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
            int curr = nums[i];
            int l = i+1;
            int r = nums.size() - 1;
            int should_be = 0 - curr;
            while(l<r){
                int sum = nums[l] + nums[r];
                cout << nums[i] << nums[l] << nums[r] << endl;
                if(sum == should_be){
                    vector<int> a;
                    a.push_back(nums[i]);
                    a.push_back(nums[l]);
                    a.push_back(nums[r]);
                    v.push_back(a);
                    while(l<r&&nums[l]==nums[l+1]) l++;
                    while(l<r&&nums[r]==nums[r-1]) r--;
                    l++;
                    r--;
                }
                else if(sum > should_be){
                    r--;
                }
                else if(sum < should_be){
                    l++;
                }
            }
        }
    }
    return v;
    }
};

int main()
{
    Solution obj;
    vector<int> a = {1,-1,-1,0};
    vector<vector<int>> sol = obj.threeSum(a);
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++) cout << (sol[i])[j] << " ";
        cout << endl;
    }
    return 0;
}