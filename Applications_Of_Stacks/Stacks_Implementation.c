#include <stdio.h>
#define MAX 4

int arr[MAX];

int top  = -1;

void push(int x);
int pop();
void display();

int main()
{

    int choice;
    printf("Press 1 to Push\nPress 2 to Pop\nPress 3 to Display\n Press 4 to Exit");    
    

    while (choice!=4)
    {
        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            int x;
            printf("\nEnter the Number to insert: ");
            scanf("%d", &x);
            push(x);

            break;
        }
            
        case 2:
        {
            int y = pop();
            printf("\n%d is popped out of the stack", y);
            break;
        
        }
            
        case 3:
        {
            display();
            break;
        }
            
        case 4:
        {
            printf("\n Bye Bye !");
            break;
        }
            
        
        default :
        {
            printf("Invalid input, try Again");
        }

        }
    }


    return 0;
}

void push(int x)
{

    if (top == MAX-1)
    {
        printf("The Stack is full");
    }
    else
    {
        top++;
        arr[top] = x;
    }

}

int pop()
{

    int val;
    if (top == -1)
    {
        printf("The Stack is Empty");
    }
    else
    {
        val = arr[top];
        arr[top] = -1;
        top--;
    }

    return val;

}

void display()
{

    if (top == -1)
    {
        printf("\nThe Stack is Empty");
    }
    else
    {
        printf("\n");
        for (int i= 0; i<top+1; i++)
        {
            printf("%d ",arr[i]);
        }
    }

}
    