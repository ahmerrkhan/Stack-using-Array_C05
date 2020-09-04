#include <stdio.h>
#include <stdlib.h>
#define N 5


void push(int);
void pop(void);
void peek(void);
void display(void);

int stack[N];
int top = -1;

int main(void)
{
    int choice;
    int val;
    while(1)
    {
        printf("\nSTACK USING ARRAYS\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.top\n");
        printf("4.display\n");
        printf("5.exit\n");

        printf("Enter your choice: ?");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter data : \n");
                    scanf("%d",&val);
                    push(val);
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5:exit(1);
                   break;
            default : printf("Invalid choice\n");
                     break;
        }

    }
}
void push(int x)
{
    if(top==N-1)
    {
        printf("Stack is overflow\n");

    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Stack is underflow\n");

    }
    else
    {
        item = stack[top];
        top--;
        printf("poped item is %d : ",item);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("No elements\n");

    }
    else
    {
        printf("Top element is %d : ",stack[top]);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("No elements in stack\n");

    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
