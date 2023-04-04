#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    bool isAnagram(string s, string t) {
        long long arr[27];
        for(int i=0;i<=26;i++) arr[i]=0;
        for(int i=0;i<s.size();i++) arr[s[i]-'a']++;
        for(int i=0;i<t.size();i++){
            arr[t[i]-'a']--;
        }
        for(int i=0;i<=26;i++){
            if(arr[i]) return false;
        }
        return true;
    }
};
int main()
{
    Solution obj;
    cout << obj.isAnagram("rat","car");
    return 0;
}