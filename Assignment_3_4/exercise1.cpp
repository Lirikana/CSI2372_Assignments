//
// Created by Edward on 2019-11-04.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

ifstream filename("num.dat");

class Tree {
    private:
        struct Node{
            int num;
            Node * left, * right;
        } * root;
    public:
        Tree(int n = 0);
        Tree(Node *p){
            root = p;
        }
        void printTree(Tree t, int k);
};

Tree::Tree(int n) {
    Node a  = {n};
    root = &a;
}

void Tree::printTree(Tree t, int k) {
    if(t.root!=NULL){
        printTree(t.root->right,k);
        cout << "t.root->num = "<<t.root->num;
        printTree(t.root->left,k);
        cout << "t.root->num = "<<t.root->num;
    }
}

int read_number(){
    int n;
    cout << "Enter the number of the sequence of length n : ";
    cin >> n;
    return n;
}

int main(){
    int length = read_number();
    filename.open("num.dat",ifstream::in);
    cout << filename.is_open();
    //string input = filename.get();

}