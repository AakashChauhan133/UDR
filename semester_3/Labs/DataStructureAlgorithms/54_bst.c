/*
 *  Author      :   Aakash Chauhan
 *  Date        :   October 23, 2023
 *  Problem     :   Operations on BST
 *                  1.  Preorder
 *                  2.  Inorder
 *                  3.  Post order
 *                  4.  Count total number of nodes
 *                  5.  Count leaf nodes
 *                  6.  Count nodes having only left child
 *                  7.  Count nodes having only right child
 *                  8.  Count nodes having both child
 *                  9.  Count nodes left hand side of root
 *                  10.  Count nodes right hand side of root
 *                  11.  Print the node having having highest info in BST
 *                  12.  Print the node having having lowest info in BST
 *                  13.  Delete any node from BST
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
} bst;

// function decleration
bst *create(bst *, int);
void preorder(bst *);
void inorder(bst *);
void postorder(bst *);
int count(bst *);

int main()
{
    // local decleration
    bst *root = NULL;

    int ch = 1, n;
    while (ch)
    {
        printf("****** MENU ******\n");
        printf("1. Create\n");
        printf("2. Preorder\n");
        printf("3. Inorder\n");
        printf("4. Postorder\n");
        printf("5. Count total number of nodes\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            // Input node data
            printf("Enter the value: ");
            scanf("%d", &n);
            root = create(root, n);
            break;
        case 2:
            printf("Preorder: ");
            preorder(root);
            printf("\n");
            break;
        case 3:
            printf("Inorder: ");
            inorder(root);
            printf("\n");
            break;
        case 4:
            printf("Inorder: ");
            postorder(root);
            printf("\n");
            break;
        case 5:
            printf("Count: %d", count(root));
            printf("\n");
            break;
        default:
            break;
        }
    }

    return 0;
}
// function definition
bst *create(bst *root, int val)
{
    bst *p = NULL;

    if (root == NULL)
    {
        p = (bst *)malloc(sizeof(bst));
        if (p == NULL)
        {
            // If no memory allocated
            printf("No memory allocated\n");
            return root;
        }
        p->left = NULL;
        p->right = NULL;
        p->data = val;
        root = p;
    }
    else if (val < root->data)
    {
        root->left = create(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = create(root->right, val);
    }
    return root;
}

void preorder(bst *root)
{
    // first print current node then left then  right
    // N L R
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(bst *root)
{
    // first left then print current node  then  right
    // L N R
    // Print in sorted order
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void postorder(bst *root)
{
    // first left then print current node  then  right
    // L R N
    if (root != NULL)
    {
        postorder(root->left);
        printf("%d ", root->data);
        postorder(root->right);
    }
}
int count(bst *root)
{
    int c = 0;
    if (root != NULL)
    {
        c++;
        c = c + count(root->left);
        c = c + count(root->right);
    }
    return c;
}