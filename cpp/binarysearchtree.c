#include<stdio.h>
 #include<stdlib.h>

typedef
 
struct
 
Node {

  
int data;
  struct
 
Node *left;

  
struct
 
Node *right;
} Node;

Node *create_node(int data)
 
{
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (!new_node) {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

Node *insert(Node *root, int data)
 
{
  if (!root) {
    return create_node(data);
  }

  if (data < root->data) {
    root->left = insert(root->left, data);
  } else
 
if (data > root->data) {
    root->right = insert(root->right, data);
  }

  return root;
}

Node *search(Node *root, int data)
 
{
  if (!root || root->data == data) {
    return root;
  }

  if (data < root->data) {
    return search(root->left, data);
  }

  return search(root->right, data);
}

void
 
inorder_traversal(Node *root)
 
{
  if (!root) {
    return;
  }

  inorder_traversal(root->left);
  printf("%d ", root->data);
  inorder_traversal(root->right);
}

int main()
 
{
  Node *root = NULL;

  root = insert(root, 50);
  root = insert(root, 30);
  root = insert(root, 20);
  root = insert(root, 40);
  root = insert(root, 70);
  root = insert(root, 60);
  root = insert(root, 80);

  printf("Inorder traversal: ");
  inorder_traversal(root);
  printf("\n");

  Node *found = search(root, 60);
  if (found) {
    printf("Found %d in the tree!\n", found->data);
  } else {
    printf("Data not found in the tree!\n");
  }

  return 0;
}
