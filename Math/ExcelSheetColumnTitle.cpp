#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer = "";
        while (columnNumber){
            int current = columnNumber % 26;
            if(current == 0){
                answer += 'Z';
                columnNumber--;
            }
            else answer += 'A' + (current - 1);
            columnNumber /= 26;
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};

int main()
{
    Solution obj;
    cout << obj.convertToTitle(702);
    return 0;
}