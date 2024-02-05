/*
 *  Author      :   Aakash Chauhan
 *  Date        :   October 26, 2023
 *  Non reccursive approch for BST
 */

// shrinivasan
// gate shasher

#include <stdio.h>
#include <stdlib.h>

// Node defintion
typedef struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
} bst;

// function decleration
bst *create(bst *, int);
bst *create_sir(bst *, int);
void inorder(bst *);
int main()
{
    // local decleration
    bst *root = NULL;

    int ch = 1, n;
    while (ch)
    {
        printf("****** MENU ******\n");
        printf("1. Create\n");
        printf("2. Inorder\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            // Input node data
            printf("Enter the value: ");
            scanf("%d", &n);
            // root = create(root, n);
            root = create_sir(root, n);
            break;
        case 2:
            printf("Inorder: ");
            inorder(root);
            printf("\n");
            break;
        }
    }
    return 0;
}

bst *create(bst *root, int val)
{
    // Non reccursive method to create a BST
    bst *p = NULL, *temp = root;
    p = (bst *)malloc(sizeof(bst));
    if (p == NULL)
    {
        return root;
    }
    p->data = val;
    if (root == NULL)
        root = p;
    else
    {
        while (temp)
        {
            if (temp->data < val)
            {
                // move right
                if (temp->right == NULL)
                    break;
                temp = temp->right;
            }
            else if (temp->data > val)
            {
                // move left
                if (temp->left == NULL)
                    break;
                temp = temp->left;
            }
        }
        if (temp->right == NULL)
            temp->right = p;
        else if (temp->left == NULL)
            temp->left = p;
    }
    p->left = p->right = NULL;
    return root;
}

bst *create_sir(bst *root, int val)
{

    // Non reccursive method to create a BST
    // This method is demostrated in DS lab by Aswal sir 12:31 PM, October 30, 2023

    bst *p = NULL, *temp = root, *q = NULL;
    p = (bst *)malloc(sizeof(bst));
    if (p == NULL)
    {
        return root;
    }
    p->data = val;
    if (root == NULL)
        root = p;
    else
    {
        while (temp != NULL)
        {
            q = temp;
            (val < temp->data) ? (temp = temp->left) : (temp = temp->right);
        }
        if (val < q->data)
            q->left = p;
        else
            q->right = p;
    }

    p->left = p->right = NULL;
    return root;
}

void inorder(bst *root)
{
    // first left then print current node  then  right
    // L N R
    // Print in sorted order
    
}
