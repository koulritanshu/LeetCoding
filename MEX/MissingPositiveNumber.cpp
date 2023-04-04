// Amazon Interview Question
// Hard Leetcode Problem
// Also known as MEX

// Basically the question asks to print mex of the array


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int current_element = nums[i];
            if(current_element >= 1 && current_element <= nums.size()){
                int current_position = current_element - 1;
                if (nums[current_position] != current_element){
                    swap(nums[current_position],nums[i]);
                    i--;
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != (i+1)) return (i+1);
        }
        return nums.size() + 1;
    }
};

int main()
{
    
    return 0;
}



// Solution if space requirement was not O(1)
// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         unordered_map<int,int> m;
//         for(int i=0;i<nums.size();i++){
//             m[nums[i]]++;
//         }
//         int i = 1;
//         while(m[i]){
//             i++;
//         }
//         return i;
//     }
// };