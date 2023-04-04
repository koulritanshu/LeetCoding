#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    }
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> original;
        original.push_back(first);
        for(int i=0;i<encoded.size();i++){
            original.push_back(original[i-1]^encoded[i]);
        }
        return original;
    }
};

int main()
{
    return 0;
}