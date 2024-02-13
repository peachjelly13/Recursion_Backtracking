#include<bits/stdc++.h>
using namespace std;

struct Node{
    struct Node* left;
    struct Node* right;
    int data;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int height_of_a_binary_tree(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_height = height_of_a_binary_tree(root->left);
    int right_height = height_of_a_binary_tree(root->right);
    return 1+max(left_height,right_height);
}
int main(){
    Node* root = new Node(7);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->right = new Node(13);
    root->left->left = new Node(13);
    root->left->left->left = new Node(12);
    root->left->left->left->left = new Node(12);
    int height = height_of_a_binary_tree(root);
    cout << height;
}