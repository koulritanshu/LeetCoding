// class MinStack {
//     stack<int> mainStack;
//     stack<int> auxillaryStack;
// public:
//     MinStack() {
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
    
//     void push(int val) {
//         if(auxillaryStack.empty()){
//             auxillaryStack.push(val);
//         }
//         else if(auxillaryStack.top() >= val){
//             auxillaryStack.push(val);
//         }
//         mainStack.push(val);
//     }
    
//     void pop() {
//         if(mainStack.top() == auxillaryStack.top()){
//             auxillaryStack.pop();
//         }
//         mainStack.pop();
//     }
    
//     int top() {
//         return mainStack.top();
//     }
    
//     int getMin() {
//         return auxillaryStack.top();
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */