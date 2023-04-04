#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<long long,long long> mapOne;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                mapOne[nums1[i]+nums2[j]]++;
            }
        }
        long long count = 0;
        for(int i=0;i<nums3.size();i++){
            for(int j=0;j<nums4.size();j++){
                long long sum = (long long)nums3[i]+(long long)nums4[j];
                if(mapOne[-1ll*sum]) count += mapOne[-1ll*sum];
            }
        }
        return count;
    }
};

int main()
{
    Solution obj;
    vector<int> v1 = {1,-1};
    vector<int> v2 = {-1,1};
    vector<int> v3 = {-1,1};
    vector<int> v4 = {-1,1};
    cout << obj.fourSumCount(v1,v2,v3,v4);
    cout << endl;
    return 0;
}