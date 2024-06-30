#include<iostream>
#include<conio.h>
#include<string.h>
#include<vector>
#include<stack>
#include<queue>

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
    queue<pair<string, string>> final_exp;
    Node* op_node = NULL;
    Node* num_node = NULL;
    stack<pair<string, string>> nums;

    public:

    queue<pair<string, string>> syntree(vector<pair<string, string>>& exp)
    {
        for (auto& it : exp)
        {
            if(it.second == "INT" || it.second == "FLOAT")
            {
                nums.push(it);
            }
            else
            {
                op_node = new Node(it.first, it.second);
                if(root == NULL)
                {
                    root = op_node;
                    num_node = new Node(nums.top().first, nums.top().second);
                    root->left = num_node;
                    nums.pop();
                    num_node = new Node(nums.top().first, nums.top().second);
                    root->right = num_node;
                    nums.pop();
                }
                else
                {
                    op_node->left = root;
                    num_node = new Node(nums.top().first, nums.top().second);
                    nums.pop();
                    op_node->right = num_node;
                    root = op_node;
                }
            }
        }
        cout<<"Creating Syntax Tree..."<<endl;
        inorder(root);
        cout<<endl;
        return final_exp;
    }

    
    void inorder(Node* root)
    {
        if(root == NULL)
        {
            return;
        }
        cout<<"(";
        inorder(root->left);
        cout<<root->val;
        final_exp.push(pair(root->val, root->id));
        inorder(root->right);
        cout<<")";
    }
};

// int main()
// {
//     vector<pair<string, string>> exp = {
//         {"25", "INT"},
//         {"50", "INT"},
//         {"60", "INT"},
//         {"*", "MUL"},
//         {"+", "ADD"},
//         {"70", "INT"},
//         {"+", "ADD"},
//     };
//     Syntax s;
//     s.syntree(exp);
//     cout<<"All fine"<<endl;
//     s.inorder(root);
//     return 0;
// }