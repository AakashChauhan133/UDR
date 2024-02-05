/*
 *  Author      :   Yash Parmar
 *  Contribution:   Aakash Chauhan  
 *  Date        :   October 27, 2023
 *  Implimentaion of BST
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} bst;

bst *create(bst *, int n);
void preorder(bst *);

int main()
{
    bst *root = NULL;
    int ch = 1, n;
    while (ch)
    {
        printf("press 1 to create a bst and 2 for preorder");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the data");
            scanf("%d", &n);
            root = create(root, n);
            break;
        case 2:
            preorder(root);
            break;
        default:
            printf("wrong choice");
        }
    }
    printf("do you want to continue ??");
    scanf("%d", &ch);
}

bst *create(bst *root, int n)
{
    bst *p = (bst *)malloc(sizeof(bst));
    if (root == NULL)
    {
        p->left = NULL;
        p->right = NULL;
        p->data = n;
        root = p;
    }
    else if (n < root->data)
    {
        root->left = create(root->left, n);
    }
    else if (n > root->data)
    {
        root->right = create(root->right, n);
    }
    return root;
}

void preorder(bst *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}