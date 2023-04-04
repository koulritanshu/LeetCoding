#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void display(ll arr[], ll n){
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}

void display(vector<int> ans){
    for(auto i:ans) cout << i << " ";
    cout << endl;
}

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);
        int continuousXor = pref[0];
        for(int i=1;i<pref.size();i++){
            ans.push_back(pref[i-1]^pref[i]);
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> v = {1,2,3,4,5};
    cout << "original vector is " << endl;
    display(v);
    vector<int> ans = obj.findArray(v);
    display(ans);
    int xoral = 0;
    for(auto i:ans){
        xoral = xoral xor i;
        cout << "Xoral -> " << xoral << endl;
    }
    return 0;
}