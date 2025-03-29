#include <stdio.h>
#include <string.h>

int main(){

    //what is a string
    //string is a array of chars placed one behind the other
    
    //u can declare in this four ways
    char str[10];//initialize but without any value but can be change
    char str2[6] = "hello";//and with value(can be change too).
    char str3[] = "world"; // in this way u dont need to specify the size of the string 
    //beacause the compiler will made this for you reading the string.

    //in that case str3 has the size of 6 spaces
    //why? let see
    printf("%i",sizeof(str3));
    // why why?
    //beacause the last caracter is \0 the null caracter is like a parameter to tell to compiler 
    //when the strings finishing

    //another case is a literal string
    char *str4 = "what is";//in this case the string will be register in read-only memory
    //u can't change the value of this string if u do that can have problems
    
    //strings is like vectors in memorie str4 is a pointer to the first element in the string


    return 0;
}