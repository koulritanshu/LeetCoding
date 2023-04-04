#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         unordered_map<ll,ll> m;
//         for(int i=0;i<nums.size();i++){
//             m[nums[i]]++;
//         }        
//         vector<int> ans;
//         int n = nums.size();
//         for(auto &value:m){
//             if(value.second>(n/3)){
//                 ans.push_back(value.first);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0, el1 = -1, el2 = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
            else if(cnt1 == 0){
                el1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0){
                el2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0; 
        cnt2 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
        }
        vector<int> ans;
        if(cnt1 > (nums.size()/3)) ans.push_back(el1);
        if(cnt2 > (nums.size()/3)) ans.push_back(el2);
        return ans;
    }
};

int main()
{
    vector<int> nums = {2,1,1,3,1,4,5,6};  
    Solution obj;
    vector<int> ans = obj.majorityElement(nums);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}