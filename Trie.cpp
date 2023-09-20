#include <bits/stdc++.h>
using namespace std;

struct Node{
    Node* arr[26];
    bool flag = false;
    void put(char ch, Node* node){
        arr[ch-'a'] = node;
    }
    void setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }
    bool containKey(char ch){
        return (arr[ch-'a']!=NULL);
    }
    Node* get(char ch){
        return arr[ch-'a'];
    }
};

class Trie {
public:
    Node * root;
    Trie() {
        root = new Node();  
    }
    
    void insert(string word) {
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(!node->containKey(word[i])){
                node->put(word[i],new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }
    bool search(string word) {
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(!node->containKey(word[i])) return false;
            node = node->get(word[i]);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for(int i=0;i<prefix.size();i++){
            if(!node->containKey(prefix[i])) return false;
            node = node->get(prefix[i]);
        }
        return true;
    }
};