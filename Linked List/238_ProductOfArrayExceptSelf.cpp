// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int totalMultiply = 1;
//         int zeroes = 0;
//         for(auto i:nums){
//             if(i==0) zeroes++;
//             else totalMultiply*=i;
//         }
//         vector<int> answer;
//         for(auto i:nums){
//             if(i==0){
//                 if(zeroes>1) answer.push_back(0);
//                 else answer.push_back(totalMultiply);
//             }
//             else if(zeroes) answer.push_back(0);
//             else{
//                 answer.push_back(totalMultiply/i);
//             }
//         }
//         return answer;
//     }
// };

// another approach is using two pointers

// multiplying from beginning and another variable
// which is being multiplied from behind

// thus we exclude the current element and append it
// to the vector