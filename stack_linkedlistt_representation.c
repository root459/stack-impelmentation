#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *newnode, *top = 0;

void push(int x)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}
void pop()
{
    if (top == 0)
    {
        printf("stack underflow");
    }
    else
    {
        newnode = top;
        top = top->link;
        printf("deleted elmemt will be %d", newnode->data);
        free(newnode);
    }
}
void display()
{
    if (top == 0)
    {
        printf("stack is empty");
    }
    else
    {
        newnode = top;
        while (newnode != 0)
        {
            printf("%d \n", newnode->data);
            newnode = newnode->link;
        }
    }
}
void peek()
{
    printf("%d \n", top->data);
}
int main()
{
    int choice = 1, data;

    while (choice)
    {
        printf("\n\n\n\nenter 1 to Push \n  enter 2 to Pop \n enter 3 to display \n enter 4 to peek \n enter 5 to exit");
        scanf("%d", &choice);
        if (choice == 5)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            printf("enter the data ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        default:
            printf("enter the right choice");
        }
    }
}
