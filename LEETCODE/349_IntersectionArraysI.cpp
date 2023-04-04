// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(0);
//         cout.tie(0);
//     }
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int,bool> f2;
//         for(int i=0;i<nums2.size();i++){
//             f2[nums2[i]] = true;
//         }
//         vector<int> ans;
//         for(int i=0;i<nums1.size();i++){
//             if(f2[nums1[i]]){
//                 ans.push_back(nums1[i]);
//                 f2[nums1[i]] = false;
//             }
//         }
//         return ans;
//     }
// };