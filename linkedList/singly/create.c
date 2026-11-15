#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *create_node(int);
void print_node(node *);
int main()
{
    int n;
    printf("enter the data\n");
    scanf("%d",&n);

    node* head = create_node(n);
    print_node(head);
}

node *create_node(int x)
{
    node *new = malloc(sizeof(node));
    if (new == NULL)
    {
        exit(1);
    }
    new->data = x;
    new->next = NULL;
    return new;
}

void print_node(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
        free(head);
        head = temp;
    }
}
