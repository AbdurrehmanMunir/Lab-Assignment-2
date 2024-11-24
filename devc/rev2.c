#include <stdio.h>

// Global Variables
char stack[100]; // Stack implemented as a character array
int top = -1;    // Top of the stack

// Function to push a character onto the stack
void push(char val) {
    if (top >= 99) { // Check if stack is full
        printf("Stack is Full\n");
    } else {
        top++;
        stack[top] = val;
    }
}

// Function to pop a character from the stack
char pop() {
    if (top <= -1) { // Check if stack is empty
        printf("Stack is Empty\n");
        return '\0'; // Return null character if empty
    } else {
        char val = stack[top];
        top--;
        return val;
    }
}

// Function to reverse and display the string
void displayReverse(char str[]) {
    int i = 0;
    // Push all characters of the string onto the stack
    while (str[i] != '\0') {
        push(str[i]);
        i++;
    }

    // Pop and print all characters from the stack to reverse the string
    printf("Reversed string: ");
    while (top >= 0) {
        printf("%c", pop());
    }
    printf("\n");
}

// Main function
int main() {
    char name[100];
    int i = 0;

    // Reading the name manually
    printf("Enter your name: ");
    while (1) {
        char ch = getchar(); // Read one character at a time
        if (ch == '\n') {    // Stop reading when newline is encountered
            break;
        }
        name[i] = ch; // Store character in name array
        i++;
    }
    name[i] = '\0'; // Null-terminate the string

    // Call function to reverse and display the string
    displayReverse(name);

    return 0;
}
