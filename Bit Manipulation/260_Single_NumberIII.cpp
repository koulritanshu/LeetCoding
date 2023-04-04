#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> singleNumber(vector<int>& nums) {
        int xoral = 0;
        vector<int> ans;
        for(auto &i:nums) xoral = xoral xor i;
        // for(auto &i:nums){
        //     if((i^xoral) == i){
        //         ans.push_back(i); 
        //     }
        // }
        // return ans;
        // USING O(1) SPACE
        // THAT IS USING BIT MANIPULATION
        int pos=0;
        while((xoral & (1<<pos)) == 0){
            pos++;
        }
        int firstNumber = 0;
        for(int i=0;i<nums.size();i++){
            if((nums[i] & (1<<pos)) != 0){
                firstNumber = firstNumber xor nums[i];
            }
        }
        ans.push_back(firstNumber);
        for(auto i:nums){
            if((i^firstNumber) == xoral){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};

void display(vector<int> b){
    for(auto i:b) cout << i << ' ';
    cout << endl;
}

int main()
{
    Solution obj;
    vector<int> v = {1,1,2,2,3,3,4,4,5,5,6,6,7,9};
    vector<int> ans = obj.singleNumber(v);
    display(ans);
    v = {1,2,1,3,2,5};
    ans = obj.singleNumber(v);
    display(ans);
    return 0;
}