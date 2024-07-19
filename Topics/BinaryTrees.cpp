#include <iostream>
#include <queue>

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* BuildTree() {
    int data;
    std::cout << "Enter data: ";
    std::cin >> data;
    if (data == -1) {
        return NULL;
    }
    node* root = new node(data);
    std::cout << "Enter left child of " << data << ": ";
    root->left = BuildTree();
    std::cout << "Enter right child of " << data << ": ";
    root->right = BuildTree();

    return root;
}

void Lot(node* root) {
    if (root == NULL) {
        return;
    }
    
    std::queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            std::cout << std::endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            std::cout << temp->data << " ";

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

int main() {
    node* root = NULL;
    root = BuildTree();

    std::cout << "Level Order Traversal (LOT):" << std::endl;
    Lot(root);

    return 0;
}