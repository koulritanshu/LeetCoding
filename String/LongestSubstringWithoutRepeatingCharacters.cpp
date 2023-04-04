// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void d(set<char>s){
//     for(auto &v:s){
//         cout << v << ' ';
//     }
//     cout << endl;
// }

// int main()
// {
//     string s;
//     cin >> s;
//     int l = 0;
//     int r = 1;
//     set<char> st;
//     st.insert(s[0]);
//     int n = s.size();
//     int count = 1;
//     int maximum = 0;
//     while (l <= r && r < n){
//         d(st);
//         auto it = st.find(s[r]);
//         if(it == st.end()){
//             count = count + 1;
//             st.insert(s[r]);
//             r++;
//         } 
//         else {
//             st.erase(st.begin());
//             l++;
//             maximum = max(maximum,count);
//             count -= 1;
//         }
//     }
//     maximum = max(maximum,count);   
//     cout << maximum << endl;
//     return 0;
// }

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         set<char> st;
//         int n = s.size();
//         int l = 0;
//         int r = 0;
//         int maximum = 0;
//         while (r < n){
//             auto it = st.find(s[r]);
//             if(it==st.end()){
//                 st.insert(s[r]);
//                 r++;
//                 maximum = max(maximum, (r-l+1));
//             }
//             else{
//                 st.erase(s[l]);
//                 l++;
//             }
//         }
//         maximum = max(maximum, (r-l+1));
//         return maximum-1;
//     }
// };
