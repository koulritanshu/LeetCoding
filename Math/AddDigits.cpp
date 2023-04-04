#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cout.tie(nullptr);
        cin.tie(nullptr);
    }
    int addDigits(int num) {
        if(num%9==0 && num!=0) return 9;
        else if(num==0) return 0;
        return num%9; 
    }
};

int main()
{
    return 0;
}