#include <stdio.h>
#define N 5
int stack[N];
int top = -1;
void push(int x)
{
    if (top == N - 1)
    {
        printf("stack full");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("stack empty");
    }
    else
    {
        printf("deleted element will be %d", stack[top]);
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf("stack empty");
    }
    else
    {
        printf("%d", stack[top]);
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d \n", stack[top]);
    }
}
int main()
{
    while (1)
    {
        int choice;
        printf("enter 1 for push\n enter  2 for pop \n enter 3 for peek \n enter 4 for display");
        scanf("%d", &choice);
        if (choice == 0)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            printf("enter the element enter in stack");
            int x;
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("invalid position");
        }
    }
}