#include <stdio.h>
#include <string.h>

#define MAX 100 // Maximum size of the stack

// Global Variables
char stack[MAX];
int top = -1;

// Function to push a character onto the stack
void push(char val) {
    if (top >= MAX - 1) {
        printf("Stack is Full\n");
    } else {
        top++;
        stack[top] = val;
    }
}

// Function to pop a character from the stack
char pop() {
    if (top <= -1) {
        printf("Stack is Empty\n");
        return '\0'; // Return null character if stack is empty
    } else {
        char val = stack[top];
        top--;
        return val;
    }
}

// Function to display the reversed string
void displayReverse(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        push(str[i]); // Push each character onto the stack
    }
    printf("Reversed string: ");
    while (top != -1) {
        printf("%c", pop()); // Pop characters to reverse the string
    }
    printf("\n");
}

// Main function
int main() {
	printf("Abdurrehman munir 2K23_BSCS-524\n");
    char name[MAX];
    
    printf("Enter your name: ");
    fgets(name, MAX, stdin); // Read the name including spaces
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline character
    
    displayReverse(name); // Call function to reverse and display the name
    
    return 0;
}

