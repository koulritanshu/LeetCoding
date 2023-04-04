#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void display(vector <int> b){
    for(auto i:b) cout << i << " ";
    cout << endl;
}

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            display(nums);
            int currentElement = nums[i];
            int correctPosition = nums[i] - 1;
            if(nums[correctPosition] != currentElement){
                swap(nums[i],nums[correctPosition]);
                i--;
            }
        }
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=(i+1)){
                v.push_back(nums[i]);
                v.push_back(i+1);
                return v;
            }
        }
        return {-1,-1};
    }
};

int main()
{
    Solution obj;
    vector<int> v = {1,2,2,4};
    vector<int> ans = obj.findErrorNums(v);
    for(auto i:ans) cout << i << " ";
    return 0;
}