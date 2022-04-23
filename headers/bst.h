#include <iostream>
using namespace std;

struct node
{
    /* data */
    int data;
    node* left;
    node* right;
};

class BST {

  private:
    node* root;
    void insert(node* node, int data);

  public:
    BST();
    ~BST();

    void insert(int data) {
      insert(root, data);
    }

    node* create(int data);
};

BST::BST(){
  root = NULL;
}

node* BST::create(int data) {
  node* temp = (node*) malloc(sizeof(node*));
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;
}