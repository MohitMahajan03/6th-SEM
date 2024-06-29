#include<iostream>
#include<conio.h>
#include<string.h>
#include<vector>
#include<stack>

using namespace std;

class Node
{
    public:
    string id;
    string val;
    Node* left;
    Node* right;

    Node(string val, string id)
    {
        this->id = id;
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* root = NULL;

class Syntax
{

    private:
    stack<pair<string, string>> stacks;
    Node* op_node = NULL;
    Node* num_node = NULL;
    public:

    void syntree(vector<pair<string, string>>& exp)
    {
        for (auto& it : exp)
        {
            if(it.second == "INT" || it.second == "FLOAT")
            {
                stacks.push(it);
            }
            else
            {
                op_node = new Node(it.first, it.second);
                if(root == NULL)
                {
                    root = op_node;
                    num_node = new Node(stacks.top().first, stacks.top().second);
                    root->left = num_node;
                    stacks.pop();
                    num_node = new Node(stacks.top().first, stacks.top().second);
                    root->right = num_node;
                }
                else
                {
                    op_node->left = root;
                    num_node = new Node(stacks.top().first, stacks.top().second);
                    stacks.pop();
                    op_node->right = num_node;
                    root = op_node;
                }
            }
        }
    }
};

int main()
{
    return 0;
}