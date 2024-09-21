/*order of addition ,subtraction ,multiplication and  division in c
() > multiplication > divison > addition > subtraction
you can easily remember this by name of :BOMDAS */

#include <stdio.h>
int main()
{
    int result = 3 + 3 * 3 - 3 / 3;
    printf("%d", result);

    // note it first follows mutipication not divison

    int b;
    b = (3 + 3) * 3 - 3 / 3;
    printf("\n%d", b);

    return 0;
}
