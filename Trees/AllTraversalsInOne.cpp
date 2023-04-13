#include <bits/stdc++.h>
using namespace std;

void display(vector<int> T){
    for(auto i: T){
        cout << i << " ";
    }
    cout << endl;
}

class Node{
    int data;
    Node*left,*right;
public:
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
    friend class BinaryTree;
};

class BinaryTree{
    Node* root = NULL;
public:
    void addElement(int x){
        cout << "Inserting: " << x << endl;
        Node* curr = root;
        Node* newNode = new Node(x);
        if(root == nullptr){
            this->root = newNode;
            return;
        }
        char ch = 'a';
        while(true){
            cout << ">> " << curr->data << endl; 
            cout << ">> l/r" << endl << ">> ";
            cin >> ch;
            if(ch == 'l' && curr->left){
                curr = curr->left;
            }
            else if(ch == 'l'){
                break;
            }
            if(ch == 'r' && curr->right){
                curr = curr->right;
            }
            else if(ch == 'r')break;
        }
        if(ch == 'l') curr->left = newNode;
        else if(ch == 'r') curr->right = newNode;
    }
    void preorder(Node* root){
        if(root){
            cout << root->data << " ";
            preorder(root->left);
            preorder(root->right);
        }
    }
    void inorder(Node* root){
        if(root){
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }
    }
    void postorder(Node* root){
        if(root){
            postorder(root->left);
            postorder(root->right);
            cout << root->data << " ";
        }
    }
    Node* g(){return root;}
    void allTraversals(){
        vector<int> preorder;
        vector<int> postorder;
        vector<int> inorder;
        stack<pair<Node*,int>> st;
        st.push({root,1});
        while(!st.empty()){     
            pair<Node*,int> temp = st.top();
            st.pop();
            if(temp.second == 1){
                preorder.push_back(temp.first->data);
                temp.second = 2;
                st.push(temp);
                if(temp.first->left){
                    temp.first = temp.first->left;
                    st.push({temp.first,1});
                }
            }
            else if(temp.second == 2){
                inorder.push_back(temp.first->data);
                temp.second = 3;
                st.push(temp);
                if(temp.first->right){
                    temp.first = temp.first->right;
                    st.push({temp.first,1});
                }
            }
            else if(temp.second == 3){
                postorder.push_back(temp.first->data);
            }
        }
        display(inorder);
        display(preorder);
        display(postorder);
    }
};

int main()
{
    BinaryTree obj;
    obj.addElement(100);
    obj.addElement(50);
    obj.addElement(40);
    obj.addElement(110);
    obj.addElement(120);
    obj.addElement(135);
    obj.addElement(57);
    obj.inorder(obj.g());
    cout << endl;
    obj.preorder(obj.g());
    cout << endl;
    obj.postorder(obj.g());
    cout << endl;
    obj.allTraversals();
}