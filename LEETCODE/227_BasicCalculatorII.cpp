// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     int calculate(string s) {
//         stack<int> st;
//         int currentNumber = 0;
//         char operation = '+';
//         for(int i=0;i<s.size();i++){
//             char current = s[i];
//             if(i == (s.size() - 1)){
//                 if(current != ' ') currentNumber = currentNumber*10+(current-'0');
//                 if(operation == '*'){
//                     int top = st.top();
//                     st.pop();
//                     st.push(top*currentNumber);
//                     currentNumber = 0;
//                 }
//                 else if(operation == '/'){
//                     int top = st.top();
//                     st.pop();
//                     st.push(top/currentNumber);
//                     currentNumber = 0;
//                 }
//                 else if(operation == '-'){
//                     st.push(currentNumber*-1);
//                     currentNumber = 0;
//                 }
//                 else  if(operation == '+'){
//                     st.push(currentNumber);
//                     currentNumber=0;
//                 }
//                 break;
//             }
//             else if(s[i] == ' ') continue;
//             if(isdigit(current)){
//                 currentNumber = currentNumber*10 + (current - '0');
//             }
//             else{
//                 if(operation == '-'){
//                     st.push(currentNumber*-1);
//                     currentNumber = 0;
//                 }
//                 else  if(operation == '+'){
//                     st.push(currentNumber);
//                     currentNumber=0;
//                 }
//                 else if(operation == '*'){
//                     int top = st.top();
//                     st.pop();
//                     st.push(top*currentNumber);
//                     currentNumber = 0;
//                 }
//                 else if(operation == '/'){
//                     int top = st.top();
//                     st.pop();
//                     st.push(top/currentNumber);
//                     currentNumber = 0;
//                 }
//                 operation = current;
//             }
//         }
//         int result = 0;
//         while(!st.empty()){
//             result += st.top();
//             st.pop();
//         }
//         return result;
//     }
// };


// APPROACH 2

// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     int calculate(string s) {
//         int lastNumber = 0, currentNumber = 0;
//         int ans = 0;
//         char operator1 = '+';
//         for(int i=0;i<s.size();i++){
//             char current = s[i];
//             if(isdigit(current)){
//                 currentNumber = currentNumber*10 + (current - '0');
//             }
//             if(!isdigit(current) && !iswspace(current) || (i == s.size() - 1)){
//                 if(operator1 == '+' || operator1 == '-'){
//                     ans += lastNumber;
//                     lastNumber = (operator1 == '+') ? currentNumber : currentNumber*-1;
//                 }
//                 else if(operator1 == '*'){
//                     lastNumber = lastNumber * currentNumber;
//                 }
//                 else if(operator1 == '/'){
//                     lastNumber = lastNumber / currentNumber;
//                 }
//                 operator1 = current;
//                 currentNumber = 0;
//             }
//         }
//         ans += lastNumber;
//         return ans;
//     }
// };