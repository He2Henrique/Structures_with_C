#include <stdio.h> // standard library to Input & Output 
#include <stdlib.h> // provides functions to memory alocation and numbers conversion

int main(){

    //int num; //initializes with radom value in the memory.
    int N = 0; // is beteer to control the value of varible.
    // there's another 3 types of a integer numbers shot, long and char
    char cha = 67; // char can store characters from ascii table but also can store values from -128 to 127
    //we can use this to hold small integers

    printf("i know value in N: %i but i dont know value in num", N);
    printf("%i = ", cha); 
    printf("%c in ascii table \n", cha);
    // output: 67 = c in ....


    // in c u can´t do that char cha = 'c'; u need to initialize by use a integer value or indicating your type.
    // but u can put another characters in the char variables by the input...

    printf("tell me a letter:\n");
    scanf("%c", &cha); // the syntax "&" indicate that the value passing by the input will be stored in varible address
    printf("%c \n", cha);// scanf will be take just the first charater if you try to pass another charecters, the rest will stay in the buffer, just the first one will be taked and can result in issues.
    
    // if u try to put another scanf like this...
    char sec_cha;
    scanf("%c",&sec_cha); //the characters in the buffer will be taked and will not let u pass any input.
    while (getchar() != '\n');//u can use this to clean the buffer. in the verification will call the function will remove characteres from the stream.

    //continue...




    return 0 ;
}