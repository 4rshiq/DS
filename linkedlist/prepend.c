#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *create_node(int);
void print_node(node *);
node* prepend_node(node* head,int x);

int main()
{
    int n, len;
    printf("Enter the no of nodes you want to create\n");
    scanf("%d", &len);

    printf("enter the data: ");
    scanf("%d", &n);

    node *head = create_node(n);

    for (int i = 1; i < len; i++)
    {
        printf("enter the data: ");
        scanf("%d", &n);

        head = prepend_node(head, n);
    }
    printf("Your LinkedList is:\n");
    print_node(head);
    
 return 0; 
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

node* prepend_node(node* head,int x)
{
    node* new = create_node(x);
    new->next = head;
    return new;
}