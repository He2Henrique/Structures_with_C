#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 5;
    //num have two things an address ### and a VALUE
    //num returns VALUE
    //&num returns address ###

    //data{
    //  address: #1234
    //  type: int
    //  value: 5
    //}


    //when u declare this...
    int *pt = &num;//addres to num
    //data{
    //  address: #9876
    //  type: int ptr
    //  value: #1234
    //  }

    printf("%p  ", pt);// print the pt.value which is ex: #1234
    printf("%p  ", &pt);// print the address of data like this pt.address ex: #9876
    printf("%i", *pt);// print the value of value pt.value -> pt.value.value : 5


    return 0;
}