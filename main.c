// introduction to the print function
#include <stdio.h>  // preprocessor that included the input out library

int main(){    // the entry point of our code
    
    printf("This is my first C \n");
    // printf -- outputs information 
    // \n breaks to the next line
    printf("Hello_world\n");
    printf("My name is Jerry\n");
    printf("I am 20 years old\n");
    printf("I have dancing\n");

    int c = 2;
    printf("%d\n", c++); // Prints 2 (then c becomes 3)

    int d = 2;
    printf("%d\n", ++d); // Prints 3 (c becomes 3 immediately)

    int e = 2;
    printf("%d\n", e--); // Prints 2 (then c becomes 1)

    int f = 2;
    printf("%d\n", --f); // Prints 1 (c becomes 1 immediately)

    return 0;

}


