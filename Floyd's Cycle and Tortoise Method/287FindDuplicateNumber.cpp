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
    int findDuplicate(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     int currentElement = nums[i];
        //     int correctPosition = nums[i]-1;
        //     if(nums[correctPosition] != currentElement){
        //         swap(nums[i],nums[correctPosition]);
        //         i--;
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=(i+1)){
        //         return nums[i];
        //     }
        // }
        // return -1;

        // FLOYD'S CYCLE FINDING ALGORITHM KNOWN AS 
        // FLYOD'S TORTOISE AND HARE METHOD
        // THIS ALGORITHM IS USED TO DETECT A CYCLE
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};

int main()
{
    return 0;
}