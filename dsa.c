#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

struct node* insert(struct node *root, int data)
{
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

/* Search in BST */
int search(struct node *root, int key, int *count)
{
    while (root != NULL)
    {
        (*count)++;

        if (key == root->data)
            return 1;

        if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }

    return 0;
}

int linearSearch(int a[], int n, int key, int *count)
{
    int i;

    for (i = 0; i < n; i++)
    {
        (*count)++;

        if (a[i] == key)
            return 1;
    }

    return 0;
}

int main()
{
    struct node *root = NULL;

    int a[] = {45, 20, 60, 10, 30, 50, 70, 25, 55};
    int n = 9;

    int i;
    int keys[] = {25, 55, 90};
    int k;

    for (i = 0; i < n; i++)
    {
        root = insert(root, a[i]);
    }

    printf("Inorder: ");
    inorder(root);

    printf("\nPreorder: ");
    preorder(root);

    printf("\nPostorder: ");
    postorder(root);

    printf("\n\nSearch Comparison:\n");

    for (k = 0; k < 3; k++)
    {
        int bstCount = 0;
        int linearCount = 0;

        search(root, keys[k], &bstCount);
        linearSearch(a, n, keys[k], &linearCount);

        printf("\nKey = %d", keys[k]);
        printf("\nBST comparisons = %d", bstCount);
        printf("\nLinear search comparisons = %d\n", linearCount);
    }

    return 0;
}
