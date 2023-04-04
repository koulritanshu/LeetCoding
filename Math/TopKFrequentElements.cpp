#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void display(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

class Solution
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        vector<pair<int,int>> v;
        for(auto i:m){
            v.push_back({i.second,i.first});
        }
        vector<int> ans;
        sort(v.begin(),v.end());
        for(int i=(v.size()-1);((i>=0)&&(ans.size()!=k));i--){
            ans.push_back(v[i].second);
        }
        display(v);
        return ans;
    }
};
//     vector<int> topKFrequent(vector<int> &nums, int k)
//     {
//         vector<unordered_set<int>> v(nums.size() + 1);
//         vector<int> ans;
//         unordered_map<int, int> m;
//         for (auto i : nums)
//             m[i]++;
//         for (auto i : m)
//         {
//             v[i.second].insert(i.first);
//         }
//         for (int i = (v.size() - 1); i > 0; i--)
//         {
//             for (auto x : v[i])
//             {
//                 ans.push_back(x);
//                 k--;
//                 if (k == 0)
//                     return ans;
//             }
//         }
//         return ans;
//     }
// };

/*
     class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            vector<unordered_set<int>> v(nums.size() + 1);
            unordered_map<int, int>map;
            vector<int> res;

            for (int n : nums)
                map[n]++;

            for (auto n : map)
                v[n.second].insert(n.first);

            for (int i = v.size() - 1; i >= 1; i--) {
                for (int n : v[i]) {
                    res.push_back(n);
                    k--;
                    if (k == 0)
                        return res;
                }
            }

            return res;

*/

int main()
{
    Solution obj;
    vector<int> v = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> ans = obj.topKFrequent(v, k);
    cout << "Displaying the answer" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}