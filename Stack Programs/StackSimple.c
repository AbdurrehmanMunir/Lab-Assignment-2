#include<stdio.h>
//Implementing Stack using Array
//if the value of top is -1 then stack is empty
//if the value of top is capacity-1 then stack is full

//Global Variables
int stack[10], n = 10, top = -1;
//Push: Adding element to stack
void push(int val)
{
    if (top >= n - 1)
	{
        printf("Stack is Full");
    }
//top=-1, Top+1=
//top=0
//stack[0]=val
	else
	{
        top++;
        stack[top] = val;
    }
}
//Pop, Removing Element from the stack
void pop()
{
    if (top <= -1)
	{
        printf("Stack is Empty\n");
    }
	else
	{
        printf("The popped element in the stack is %d\n", stack[top]);//stack[0]
        top--;//0-1=-1
    }
}
//Print the all elements of stack
void display() {
    if (top >= 0)
	{
        printf("Stack elements are: ");
//Loop for printing array elements
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

//Main Function
//if value of f is
//1-Push
//2-pop
//3-Display
//4-exit
//5-retry
int main()
{
	int f, value;
	do
	{
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
	}
		while (f != 4);
	return 0;

}
