#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

int balanced(char exp[]);
void push(char x);
int checkempty();
int match(char var, char arr);
char pop();

int main()
{
    char expression[MAX];
    int done;

    printf("\nEnter the Expression which You are gonna Balance: ");
    fgets(expression, MAX, stdin);

    done = balanced(expression);

    if (done==1)
    {
        printf("\nThe Expression is Balanced!");
    }
    else
    {
        printf("\nThe Expression is Not Balanced!");
    }
    return 0;
}

int balanced(char exp[])
{
    int balance = 0; int i;
    for (i=0; i<strlen(exp); i++)
    {

        if (exp[i] == '[' || exp[i] == '(' || exp[i] == '{')
        {
            push(exp[i]);
        }
        
        if (exp[i] == ']' || exp[i] == ')' || exp[i] == '}')
        {
            if (checkempty()==1)
            {
                printf("\nInvalid Expression");
                return 0;
            }
            else
            {
                char temp = pop();
                if(match(temp, exp[i])==0)
                {
                    printf("\nInvalid Expression");
                    return 0;
                }
            }  
        }

    }

    if (checkempty()==1)
    {
        balance = 1;
    }
    else
    {
        balance = 0;
    }

    return balance;
}

void push(char x)
{
    if (top==MAX-1)
    {
        printf("\nThe Stack is Full!");
        return;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

int checkempty()
{
    if (top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int match(char var, char arr)
{
    if (var == '[' && arr == ']')
    {
        return 1;
    }

    if (var == '(' && arr == ')')
    {
        return 1;
    }

    if (var == '{' && arr == '}')
    {
        return 1;
    }

    return 0;
}

char pop()
{
    char s = stack[top];
    top--;
    return s;
}