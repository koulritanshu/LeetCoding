#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    string removeKdigits(string num, int k) {
        if(k==num.size()) return "0";
        stack<char> st;
        st.push(num[0]);
        int temp = k;
        for(int i=1;i<num.size();i++){
            while(k>0 && (!st.empty()) && (st.top() > num[i])){
                st.pop();
                k--;
            }
            st.push(num[i]);
            if(st.size() == 1 && st.top() == '0') st.pop();
        }
        while(k && !st.empty()){
            k--;
            st.pop();
        }
        string ans = "";
        for(int i=0;i<num.size()-temp && !st.empty();i++){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans!= "") return ans;
        return "0";
    }
};

int main()
{
    Solution obj;
    cout << obj.removeKdigits("112",1);
}