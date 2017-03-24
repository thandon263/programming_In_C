#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int x = 1;
    int y = 2;
    
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("Swapping...\n");
    swap(&x, &y);
    printf("Swapped!\n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *b = *a;
    *b = tmp;
}

// ------------------------------------- //
/*********** 
 * 91 * 92 *  (address) in memory.
 * ** * ** *
 *  1 *  2 *  Value x, y respectively allocated in the stack.
 ***********  As soon as the swap function is executed 
 *            It is removed from the stack ( so the local variables exist only for that moment
 *              therefore with pointers and references you are not creating copied but 
 *              assigning the values on the fly as you execute the program before swap is removed from the stack).
 * 
 *
 */
 
