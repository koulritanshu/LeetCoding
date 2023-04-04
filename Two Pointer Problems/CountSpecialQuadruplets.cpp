#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// class Solution {
// public:
//     int countQuadruplets(vector<int>& nums) {
//         reverse(nums.begin(),nums.end());
//         int count = 0;
//         unordered_map<int,int> m;
//         for(int i=0;i<nums.size();i++){
//             for(int j=(i+1);j<nums.size();j++){
//                 for(int k=(j+1);k<nums.size();k++){
//                     if(m[nums[i]+nums[j]+nums[k]]){
//                         count+=m[nums[i]+nums[j]+nums[k]];
//                     }
//                 }
//             }
//             m[nums[i]]++;
//         }
//         return count;
//     }
// };

class Solution
{
public:
    int countQuadruplets(vector<int> &nums){
        unordered_map<int,int> m;
        int answer = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                m[nums[i]+nums[j]]++;
            }
            for(int k=i+2;k<nums.size();k++){
                answer += m[nums[k]-nums[i+1]];
            }
        }
        return answer;
    }
};

int main()
{
    Solution obj;
    vector<int> v = {58, 39, 40, 98, 21, 53, 89, 38, 34, 8, 57, 98};
    cout << obj.countQuadruplets(v);
    return 0;
}