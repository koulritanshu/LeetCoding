#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size() == 0) return {};
        else if(nums.size()==1) return {to_string(nums[0])};
        int a = nums[0];
        for(int i=0;i<nums.size();i++){
            if(i == (nums.size()-1) || (nums[i] + 1) != nums[i+1]){
                if(nums[i] != a){
                    string temp = to_string(a) + "->" + to_string(nums[i]);
                    ans.push_back(temp);
                }
                else{
                    string temp = to_string(a);
                    ans.push_back(temp);
                }
                if(i != nums.size()-1){
                    a = nums[i+1];
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> v = {0,2,3,4,6,8,9};
    vector<string> ans = obj.summaryRanges(v);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}