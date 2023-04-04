#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    long long countVowels(string word) {
        long long previous0 = 0;
        long long solution = 0;
        for(int i=0;i<word.size();i++){
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u'){
                solution += word.size() - i;
                solution += previous0;
            }
            else{
                previous0++;
            }
        }
        return solution;
    }
};

int main()
{
    string s;
    s = "aba";
    Solution obj;
    cout << obj.countVowels(s) << endl;
    return 0;
}