// Demonstrating Prefix and Postfix Increment/Decrement

#include <stdio.h>

int main() {

    // ==============================
    // 1. POSTFIX INCREMENT (num++)
    // ==============================

    int num1 = 12;

    printf("POSTFIX INCREMENT\n");
    printf("Before: num1 = %d\n", num1);

    printf("Using num1++: %d\n", num1++); 
    // Use/print the current value 12 first,
    // then increment num1 to 13.

    printf("After: num1 = %d\n\n", num1);
    // num1 is now 13.


    // ==============================
    // 2. PREFIX INCREMENT (++num)
    // ==============================

    int num2 = 12;

    printf("PREFIX INCREMENT\n");
    printf("Before: num2 = %d\n", num2);

    printf("Using ++num2: %d\n", ++num2);
    // Increment num2 from 12 to 13 first,
    // then use/print the new value 13.

    printf("After: num2 = %d\n\n", num2);
    // num2 is now 13.


    // ==============================
    // 3. POSTFIX DECREMENT (num--)
    // ==============================

    int num3 = 12;

    printf("POSTFIX DECREMENT\n");
    printf("Before: num3 = %d\n", num3);

    printf("Using num3--: %d\n", num3--);
    // Use/print the current value 12 first,
    // then decrement num3 to 11.

    printf("After: num3 = %d\n\n", num3);
    // num3 is now 11.


    // ==============================
    // 4. PREFIX DECREMENT (--num)
    // ==============================

    int num4 = 12;

    printf("PREFIX DECREMENT\n");
    printf("Before: num4 = %d\n", num4);

    printf("Using --num4: %d\n", --num4);
    // Decrement num4 from 12 to 11 first,
    // then use/print the new value 11.

    printf("After: num4 = %d\n", num4);
    // num4 is now 11.


    return 0;
}