/*
 *  Author      :   Aakash Chauhan
 *  Section     :   IoT
 *  Roll No     :   01
 *  Date        :   October 23, 2023
 *  Problem     :   Operations on BST (call by value)
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
int count_left(bst *);
int count_right(bst *);
int count_both(bst *);
int highest(bst *);
int lowest(bst *);
bst *delete(bst *, int);

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
        printf("6. Count total number of nodes having only left child\n");
        printf("7. Count total number of nodes having only right child\n");
        printf("8. Count total number of nodes having both children\n");
        printf("9. Count nodes left hand side of root\n");
        printf("10. Count nodes right hand side of root\n");
        printf("11. Print the node having having highest info in BST\n");
        printf("12. Print the node having having lowest info in BST\n");
        printf("13. Delete value\n");
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
            printf("Postorder: ");
            postorder(root);
            printf("\n");
            break;
        case 5:
            printf("Count: %d", count(root));
            printf("\n");
            break;
            break;
        case 6:
            printf("Count: %d", count_left(root));
            printf("\n");
            break;
        case 7:
            printf("Count: %d", count_right(root));
            printf("\n");
            break;
        case 8:
            printf("Count: %d", count_both(root));
            printf("\n");
            break;
        case 9:
            printf("Count: %d", count(root->left));
            printf("\n");
            break;
        case 10:
            printf("Count: %d", count(root->right));
            printf("\n");
            break;
        case 11:
            printf("highest: %d", highest(root));
            printf("\n");
            break;
        case 12:
            printf("lowest: %d", lowest(root));
            printf("\n");
            break;
        case 13:
            printf("Enter the value to delete: ");
            scanf("%d", &n);
            root = delete (root, n);
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
        postorder(root->right);
        printf("%d ", root->data);
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

int count_left(bst *root)
{
    // Only having left child
    // left not null
    // right null
    int c = 0;
    if (root != NULL && root->left != NULL && root->right == NULL)
    {
        c++;
        c = c + count_left(root->left);
        c = c + count_left(root->right);
    }
    return c;
}
int count_right(bst *root)
{
    // Only having right child
    // right not null
    // left null
    int c = 0;
    if (root != NULL && root->left == NULL && root->right != NULL)
    {
        c++;
        c = c + count_right(root->left);
        c = c + count_right(root->right);
    }
    return c;
}
int count_both(bst *root)
{
    // Having both children
    // left not null
    // right not null
    int c = 0;
    if (root != NULL && root->left != NULL && root->right != NULL)
    {
        c++;
        c = c + count_both(root->left);
        c = c + count_both(root->right);
    }
    return c;
}

int highest(bst *root)
{
    // To find largest value in bst => right most value
    // considering -1 as outbound value
    if (root == NULL)
        return -1;
    if (root != NULL && root->right == NULL)
    {
        return root->data;
    }
    return highest(root->right);
}
int lowest(bst *root)
{
    // To find lowest value in bst => left most value
    // considering -1 as outbound value
    if (root == NULL)
        return -1;
    if (root != NULL && root->left == NULL)
    {
        return root->data;
    }
    return lowest(root->left);
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
        root->left = delete(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = delete(root->right, val);
    }
    else
    {
        // case of found val == root data is true
        if (root->left == NULL){
            bst * p = root->right;
            free(root);
            return p;
        }
        else if (root->right == NULL){
            bst * p = root->left;
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
