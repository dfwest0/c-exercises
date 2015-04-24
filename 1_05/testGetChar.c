#include <stdio.h>

/* verifies int value of 'c != EOF' is 0 or 1  */
main(){
    int c;
    int g;

    c = getchar();
    while (g = (c!= EOF)) {
        printf("%d",g);
        c = getchar();
    }
    printf("%d\n",g);
}

