#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Stacks
//use stacks to store data in a LIFO way (last in first out)
// we can implement stacks using arrays or linked lists
// we use arrays when we know the size of the stack in advance
// we use linked lists when we don't know the size of the stack in advance
// like a call stack in a program.

#define MAX 100 // maximum size of the stack

typedef struct Stack { // define a structure for the stack
    int top; // index of the top element in the stack
    int items[MAX]; // array to store the elements of the stack
} Stack;

// function to manipulate the stack
void initStack(Stack *s) { // initialize the stack
    s->top = -1; // set the top index to -1 (empty stack)
}

bool isEmpty(Stack *s) { // check if the stack is empty
    bool test = s->top == -1; // check if the top index is -1
    if(test) { // if the stack is empty
        printf("Stack is empty\n"); // print an error message
    }
    return test; // return the awnser
}

bool isFull(Stack *s) { // check if the stack is full
    return s->top == MAX - 1; // return true if the top index is equal to the maximum size of the stack - 1
}


void push(Stack *s, int item) { // push an item onto the stack
    if(isFull(s)) { // check if the stack is full
        printf("Stack is full\n"); // print an error message
        return; // exit the function
    }else{
        s->items[++(s->top)] = item; // increment the top index and add the item to the stack
    }
}

int pop(Stack *s) { // pop an item from the stack
   
    return (isEmpty(s)) ? -1 : s->items[(s->top)--]; // decrement the top index to remove the top item from the stack
    // note that we decrement the index but we didn't remove the item from the stack
    // this is because we don't want to shift the items in the array
    // because if the user put another item in the stack we can use the same space and just overwrite the item.
    
}

int peek(Stack *s) { // peek at the top item of the stack without removing it
    
    return (isEmpty(s)) ? -1 : s->items[s->top]; // return the top item of the stack without removing it

}

int main() {
    //testing the stack functions
    Stack s; 
    initStack(&s); // initialize the stack
    push(&s, 1);
    push(&s, 2);
    push(&s, 3); 

    printf("Top item: %d\n", peek(&s)); 
    printf("Popped item: %d\n", pop(&s)); 
    printf("Popped item: %d\n", pop(&s)); 

    return 0;
}