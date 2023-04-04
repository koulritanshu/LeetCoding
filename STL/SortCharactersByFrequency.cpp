#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// class Solution {
// public:
//     string frequencySort(string s) {
//         unordered_map<char,int> m;
//         for(int i=0;i<s.size();i++){
//             m[s[i]]++;
//         }
//         string temp = "";
//         char curr;
//         while(temp.size() != s.size()){
//             int maxi = INT_MIN;
//             for(auto &v: m){
//                 if(v.second > maxi){
//                     maxi = v.second;
//                     curr = v.first;
//                 }
//             }
//             for(int i=0;i<maxi;i++){
//                 temp += curr;
//             }
//             m[curr] = 0;
//         }
//         return temp;
//     }
// };

// Approach 2 using vector of pair of integer and char

class Solution
{
public:
    string frequencySort(string s){
        string ans = "";
        unordered_map<char,int> m;
        vector<pair<int,char>> v;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto &i:m){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        for(auto &value:v){
            while(value.first!=0){
                ans += value.second;
                value.first--;
            }
        }
        return ans;
    }
};