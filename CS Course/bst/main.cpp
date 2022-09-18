#include <iostream>

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
        root=nullptr;;
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

    void addValue(int value)
    {
        if(search(value)) return;
        Node* n=new Node(value,nullptr,nullptr);
        if(root==nullptr)
        {
            root=n;
            return;
        }
    }


};
int main()
{

}
