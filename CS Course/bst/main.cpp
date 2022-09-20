#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int value;
    Node* left;
    Node* right;
    Node()
    {
        this->value=0;
        this->right=nullptr;
        this->left=nullptr;
    }
    Node(int value,Node* left,Node* right)
    {
        this->value=value;
        this->right=right;
        this->left=left;
    }
};

class BST
{
private:
    Node* root;
public:
    BST()
    {
        root=nullptr;
    }
    bool search(int value)
    {
        Node* p=root;
        while(p !=nullptr)
        {
            if(p->value == value) return true;
            if(p->value > value)
            {
                p=p->right;
            }
            else
            {
                p=p->left;
            }
        }
        return false;
    }

    void addValue(int value){
    if(search(value)) return;
    Node* n=new Node(value,nullptr,nullptr);
    if(root==nullptr){
        root=n;
        return;
    }
    Node* p=root;
    while(true){
        if(value >p->value){
            if(p->right==nullptr)break;
            p=p->right;
        }
        else{
            if(p->left==nullptr)break;
            p=p->left;
        }
    }
    if(value >p->value){
        p->right=n;
    }else{
    p->left=n;
    }
    }
void DFS(Node* n)
    {
        if(n == nullptr)return;
        cout<<n->value<<"->";
        DFS(n->left);
        DFS(n->right);
    }

    void print(){
    DFS(root);
    }
    void BFS(){
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        cout<<q.front()->value<<"->";
if(q.front()->left !=nullptr){
    q.push(q.front()->left);
}
if(q.front()->right !=nullptr){
    q.push(q.front()->right);
}
q.pop();
    }
    }
};
int main()
{
BST myTree;
    myTree.addValue(50);
    myTree.addValue(40);
    myTree.addValue(60);
    myTree.addValue(30);
    myTree.addValue(70);
    myTree.addValue(20);
    myTree.addValue(90);
    myTree.addValue(50);
  myTree.BFS();
}
