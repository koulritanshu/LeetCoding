#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void display(vector<int> v){
    for(auto &value : v){
        cout << value << " ";
    }
    cout << endl;
}

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    display(nums);
    int best_difference = INT_MAX;
    int current = 0;
    int solution = 0;
    for(int i=0;i<nums.size();i++){
        int l = (i+1);
        int r = (nums.size()-1);
        while (l<r){
            
            current = nums[i] + nums[l] + nums[r];
            int calculate = current - target;
            if (abs(current-target) < best_difference){
                best_difference = abs(current - target);
                solution = current;
            }
            if(abs(current-target) == 0) return current;
                
            if (current > target) r--;
            else if(current < target) l++;
        }
    }
    return solution;
    }
};

int main()
{
    vector<int> v = {-1000,-5,-5,-5,-5,-5,-5,-1,-1,-1}; 
    int target = -14;
    Solution obj;
    cout << obj.threeSumClosest(v,target);
    return 0;
}