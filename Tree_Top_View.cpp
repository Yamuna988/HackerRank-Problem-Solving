#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* insert(struct node* root, int data) {

    if (root == NULL) {

        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;
        node->left = NULL;
        node->right = NULL;

        return node;

    } else {

        struct node* cur;

        if (data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
        } else {
            cur = insert(root->right, data);
            root->right = cur;
        }

        return root;
    }
}

/* Complete the function */

void topView(struct node *root)
{
    struct node *queue[1000];
    int pos[1000];

    int front = 0;
    int rear = 0;

    int seen[2000] = {0};
    int value[2000];

    queue[rear] = root;
    pos[rear] = 1000;
    rear++;

    while (front < rear)
    {
        struct node *temp = queue[front];
        int p = pos[front];

        front++;

        if (seen[p] == 0)
        {
            seen[p] = 1;
            value[p] = temp->data;
        }

        if (temp->left != NULL)
        {
            queue[rear] = temp->left;
            pos[rear] = p - 1;
            rear++;
        }

        if (temp->right != NULL)
        {
            queue[rear] = temp->right;
            pos[rear] = p + 1;
            rear++;
        }
    }

    for (int i = 0; i < 2000; i++)
    {
        if (seen[i])
        {
            printf("%d ", value[i]);
        }
    }
}

int main() {

    struct node* root = NULL;

    int t;
    int data;

    scanf("%d", &t);

    while (t-- > 0)
    {
        scanf("%d", &data);
        root = insert(root, data);
    }

    topView(root);

    return 0;
}
