#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dp;
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    int answer(vector<int> &nums, int i){
        if(dp[i] != -1) return dp[i];
        int curr = 1;
        for(int j=0;j<i;j++){
            if(nums[i]>nums[j]){
                curr = max(curr,answer(nums,j)+1);
            }
        }
        return dp[i] = curr;
    }
    int lengthOfLIS(vector<int>& nums) {
        dp = vector<int> (2600,-1);
        int curr = INT_MIN;
        for(int i=0;i<nums.size();i++){
            curr = max(curr,answer(nums,i));
        }
        return curr;
    }
};