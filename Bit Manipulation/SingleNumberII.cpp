// Every number appears thrice except one number

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// class Solution{
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
// }
// int singleNumber(vector<int> &nums){
//     unordered_map<int,int> m;
//     for(auto i:nums) m[i]++;
//     for(auto i:m) if(i.second==1) return i.first;
//     return -1;
// }

// SOLVING USING BIT MANIPULATION

class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for(int i=0;i<64;i++){
            int sum = 0;
            for(auto j:nums){
                if((j & (1<<i)) != 0) sum++;
            } 
            if(sum % 3 != 0){
                ans = ans | (1<<i);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> v = {2,2,2,33,5,5,5};
    Solution obj;
    cout << obj.singleNumber(v) << endl;
    return 0;
}