#include <stdio.h>
#include <stdlib.h>
//trying to understand a linkedlist

// defining the node structure
struct Node {
    int data;           // value to be stored
    struct Node* next;  // the pointer to the next node, that means this variable next will take the address from another instance of this node.
};


// a function to create a new node in memory passing the value, and will return the address of that node.
struct Node* crtNo(int value) {
    struct Node* newNo = (struct Node*)malloc(sizeof(struct Node));//create a pointer to structure of the Node type;
    //that recives a generic pointer from the beginning of the allocated block with the size of a structure node, malloc(..)
    //and we indicate that is a pointer to a struct node.

    //sometimes malloc can return to us null beacause dont find a free block in the memory to be allocated
    //so we need to varificate this 
    if (newNo == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);// ends the programing
    }

    newNo->data = value;//then will be passed the value to part of structure that stores it 
    newNo->next = NULL;// and sets the next value to null, to avoid using junk memory as address

    return newNo;
}


// function to insert a new node.
void insert(struct Node** head, int value) {
    //we need a poiter to a poiter what that means that means head is a pointer to a local in memory who stores another pointer.

    struct Node* newNo = crtNo(value);//after putting the value in the allocated memory space the fuction will return the address

    
    newNo->next = *head;//lets supose the address is #1
    // now newNo will acess this #1 part of memory and in partition to pointer(next) will take the pointer stores in head which is null in the first case
    *head = newNo;// after that in address of head, will storege the address #1;

    //in the next stages when we create a new node which address is #2
    //in #2 will get the #1 address in partition next
    //and head will get the loation of newNo which is #2
    //and so on...

    //so we can see is the pointer always point to start and the next nodes points to the previous 

}

// find a element in linkedlist
struct Node* find_node(int position, struct Node* Head)
{
    struct Node* pointer = Head;
    int cont=0;
    
    while(cont < position ){
        if(pointer->next == NULL){
            break;
        }
        pointer = pointer -> next;
        cont ++;
    }
    if(cont != position){
        printf("element wont be found\n");
        printf("the last element was %i\n", cont);
    }
    return pointer;
    
    
}



// Funtion to print the list
void printList(struct Node* head) {
    struct Node* actual = head;//the last location
    while (actual != NULL) {//while dont reach at the start node 
        printf("%d -> ", actual->data);//print the value in structure
        actual = actual->next;// next location
    }
    printf("NULL\n");
}

// fuction to clean all list in memory
void FreeList(struct Node* head) {
    struct Node* actual = head;//take the address of last created node stores by head and pass the address from head to actual
    struct Node* nextNo;// another pointer
    while (actual != NULL) {
        nextNo = actual->next; // acess the last node take the location to next
        free(actual);           // clean the actual
        actual = nextNo;       // and go to next one
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* snode;
    insert(&head, 13);
    insert(&head, 40);
    insert(&head, 90);
    
    snode = find_node( 2 ,head);
    printf("%i\n", snode->data);
    printf("Linkedlist: ");
    printList(head);
    FreeList(head);

    return 0;
}