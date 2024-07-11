#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top = -1;

void push();
void show();
void pop();

int main()
{
    int ch;
    printf("press 1 for push\n press 2 for show\n press 3 for pop\n");
    while (1)
    {
        printf("enter choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            push();
            break;
            case 2:
            show();
            break;
            case 3:
            pop();
            break;
            default:
            printf("invalid choice\n");
        }
    }
    return 0;
}

void push()
{
    int item;
    if (top==4)
    {
        printf("stack is full\n");
    }
    else{
        printf("enter item: ");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}

void show()
{
    int i;
    if (top<0)
    {
        printf("stack is empty\n");
    }
    else{
        for(i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

void pop()
{
    if (top==-1)
    {
        printf("stack is empty\n");
    }
    else{
        printf("popped item: %d\n", stack[top]);
        top=top-1;
    }
}
