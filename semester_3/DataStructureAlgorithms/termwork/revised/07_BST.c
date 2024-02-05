/*
    Author  :   Aakash Chauhan
    Roll no :   2021931
    Section :   IoT
    Class Roll: 01
    W.A.P. to create a binary search tree and perform following operations:
    1) Search a particular key.
    2) Delete a node from the tree.
    3) Find total number of leaf nodes
    4) Find height of a binary search tree
    5) Count total numbers of nodes from right hand side of root node
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
void inorder(bst *);
int inorder_search(bst *, int);
int count(bst *);
int count_both(bst *);
bst *delete(bst *, int);
int height(bst *);

int main()
{
    // local decleration
    bst *root = NULL;

    int ch = 1, n, key;
    while (ch)
    {
        printf("****** MENU ******\n");
        printf("1. Create\n");
        printf("2. Search value\n");
        printf("3. Delete value\n");
        printf("4. Count total number leaf nodes\n");
        printf("5. Count nodes right hand side of root\n");
        printf("6. Inorder\n");
        printf("7. Height of BST\n");
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
            printf("Search: ");
            printf("Enter the key: ");
            scanf("%d", &key);
            printf("\n");
            if (inorder_search(root, key))
            {
                printf("found\n");
            }
            else
                printf("Not found\n");

            break;
        case 3:
            printf("Enter the value to delete: ");
            scanf("%d", &n);
            root = delete (root, n);
            break;
        case 4:
            printf("Count: %d", count_both(root));
            printf("\n");
            break;
        case 5:
            printf("Count: %d", count(root->right));
            printf("\n");
            break;
        case 6:
            printf("Inorder: ");
            inorder(root);
            printf("\n");
            break;
        case 7:
            printf("height: %d", height(root));
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

int inorder_search(bst *root, int key)
{
    // first left then print current node  then  right
    // L N R
    // Print in sorted order
    if (root != NULL)
    {
        inorder_search(root->left, key);
        if (root->data == key)
            return 1;
        inorder_search(root->right, key);
    }
    return 0;
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
int count(bst *root)
{
    // Count total number of nodes
    int c = 0;
    if (root != NULL)
    {
        c++;
        c = c + count(root->left);
        c = c + count(root->right);
    }
    return c;
}

int count_both(bst *root)
{
    // Having no children
    // left == null
    // right == null
    int left_leaf_count, right_leaf_count;
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    // Recursively count leaf nodes in the left and right subtrees
    left_leaf_count = count_both(root->left);
    right_leaf_count = count_both(root->right);

    return left_leaf_count + right_leaf_count;
}

bst *delete(bst *root, int val)
{
    if (root == NULL)
    {
        printf("NOT FOUND\n");
        return root;
    }
    if (val < root->data)
    {
        root->left = delete (root->left, val);
    }
    else if (val > root->data)
    {
        root->right = delete (root->right, val);
    }
    else
    {
        // case of found val == root data is true
        if (root->left == NULL)
        {
            bst *p = root->right;
            free(root);
            return p;
        }
        else if (root->right == NULL)
        {
            bst *p = root->left;
            free(root);
            return p;
        }
        else
        {
            // here nothing is null
            bst *p = root, *temp = root->right;
            while (temp->left)
            {
                // finding inder sussesor
                temp = temp->left;
            }
            temp->left = p->left;
            // replacing root with root right
            root = root->right;
            free(p);
        }
    }
    return root;
}

int height(bst *root)
{
    // Count height tree
    int l, r;
    if (root != NULL)
    {
        l = height(root->left); // go to left 
        r = height(root->right);
        return ((l > r) ? l + 1: r + 1);
    }
    return 0;
}