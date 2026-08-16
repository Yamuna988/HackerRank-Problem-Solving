void decode_huff(struct node *root, char *s)
{
    struct node *current = root;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '0')
        {
            current = current->left;
        }
        else if (s[i] == '1')
        {
            current = current->right;
        }

        if (current->left == NULL && current->right == NULL)
        {
            printf("%c", current->data);
            current = root;
        }
    }

    printf("\n");
}
