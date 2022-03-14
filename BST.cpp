#include "bits/stdc++.h"
using namespace std;

class Tree{
    public:
        int val;
        Tree* left;
        Tree* right;

    Tree(int key){
        val = key;
        left = NULL;
        right = NULL;
    }

};

Tree* insert(Tree* root,int key){
        if(root == NULL){
            root = new Tree(key);
            return root;
        }
        if(root->val > key){
            root->left = insert(root->left,key);
        } else{
            root->right = insert(root->right,key);
        }
        return root;
    }

    void display(Tree* root){
        if(root == NULL){
            return;
        }
        display(root->left);
        cout<<root->val<<" ";
        display(root->right);
    }

    bool search(Tree* root,int key){
        if(root == NULL){
            return false;
        }
        if(root->val == key){
            return true;
        }
        return root->val > key ? search(root->left,key): search(root->right,key) ;
    }

int main(){

    int arr[] = {8,4,5,6,3,10,12,9};
    Tree* root = NULL;

    for(auto x: arr){
        root = insert(root,x);
    }
    display(root);
    cout<<"\n"<<search(root,13);
    return 0;
}