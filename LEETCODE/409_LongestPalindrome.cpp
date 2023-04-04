// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(0);
//         cout.tie(0);
//     }
//     int longestPalindrome(string s) {
//         unordered_map<char,long long> m;
//         for(int i=0;i<s.size();i++){
//             m[s[i]]++;
//         }
//         long long ans = 0;
//         bool oddpresent = 0;
//         for(auto i:m){
//             if(i.second % 2){
//                 ans += (i.second - 1);
//                 oddpresent = 1;
//             }
//             else ans += i.second;
//         }
//         if(oddpresent) ans++;
//         return ans;
//     }
// };