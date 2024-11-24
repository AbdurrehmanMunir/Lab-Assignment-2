#include <stdio.h>

// Global Variables
int stack[10], n = 10, top = -1;

// Push: Adding element to stack
void push(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        top++;
        stack[top] = val;
        printf("Value pushed: %d\n", val);
    }
}

// Pop: Removing element from the stack
void pop()
{
    if (top <= -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("The popped element is %d\n", stack[top]);
        top--;
    }
}

// Display: Print all elements of the stack
void display()
{
    if (top >= 0)
    {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Stack is empty\n");
    }
}

// Main Function
int main()
{
    int f, value;

    do
    {
        printf("\nChoose an option:\n");
        printf("1 - Push\n2 - Pop\n3 - Display\n4 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &f);

        if (f == 1)
        {
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(value);
        }
        else if (f == 2)
        {
            pop();
        }
        else if (f == 3)
        {
            display();
        }
        else if (f == 4)
        {
            printf("Exiting program.\n");
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    } while (f != 4);

    return 0;
}

