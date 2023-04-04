#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// class Solution{
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<long long, vector<long long>> m;
//         for(int i=0;i<nums.size();i++){
//             m[nums[i]].push_back(i);
//         }
//         for(int i=0;i<nums.size();i++){
//             if(m[nums[i]].size()==1) continue;
//             else if(m[nums[i]].size()==2){
//                 if((m[nums[i]][1] - m[nums[i]][0]) <= k) return true;
//             }
//             else{
//                 for(int z=0;z<m[nums[i]].size()-1;z++){
//                     if((m[nums[i]][z+1] - m[nums[i]][z]) <= k) return true;
//                 }
//                 return false;
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]] || (nums[0]==nums[i]) && i!=0){
                if(abs(i - m[nums[i]]) <= k) return true;
            }
            m[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    Solution obj;
    vector<int> v = {313,64,612,515,412,661,244,164,492,744,233,579,62,786,342,817,838,396,230,79,570,702,124,727,586,542,919,372,187,626,869,923,103,932,368,891,411,125,724,287,575,326,88,125,746,117,363,8,881,441,542,653,211,180,620,175,747,276,832,772,165,733,574,186,778,586,601,165,422,956,357,134,857,114,450,64,494,679,495,205,859,136,477,879,940,139,903,689,954,335,859,78,20};
    cout << obj.containsNearbyDuplicate(v,22);
    return 0;
}