// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(0);
//         cout.tie(0);
//     }
//     int minimumDifference(vector<int>& nums, int k) {
//         if(k==1) return 0;
//         sort(nums.begin(),nums.end());
//         if(k==nums.size()) return nums[nums.size()-1] - nums[0];
//         int ans = INT_MAX;
//         for(int i=0;i<=nums.size()-k;i++){
//             ans = min(ans,nums[i+k-1]-nums[i]);
//         }
//         return ans;
//     }
// };


// // 1 2 3 4 5  k = 2

// // i = 0 i + k - 1 = 1

// // till 4 and 5 

// // nums.size() = 5 - k = 5 - 2 = 3 