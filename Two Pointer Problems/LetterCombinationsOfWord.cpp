#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string out = "";
        while (i>=0 || j >= 0 || carry)
        {
            if(i>=0){
                carry += (a[i] - '0');
                i--;
            }
            if(j>=0){
                carry += (b[j] - '0');
                j--;
            }
            out += ((carry%2) + '0');
            carry = carry / 2;
        }
        reverse(out.begin(),out.end());
        return out;
    }
};

int main()
{
    Solution obj;
    cout << obj.addBinary("11","1");
    return 0;
}