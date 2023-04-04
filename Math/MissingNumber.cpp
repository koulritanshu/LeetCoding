#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void display(vector <int> b){
    for(auto i:b) cout << i << " ";
    cout << endl;
}

// Can apply the concept below by xoring too
class Solution {
public:
    Solution(){ 
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<=nums.size();i++){
            sum += i;
        }
        for(int i=0;i<nums.size();i++) sum -= nums[i];
        return sum;
    }
};

int main()
{
    vector<int> v = {3,0,1};
    Solution obj;
    cout << obj.missingNumber(v);
    return 0;
}