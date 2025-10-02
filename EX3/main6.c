#include <stdio.h>

int main() {
    int i = 119;
    if( i <= 30 ) {
        printf("free");
    }
    else if( i >= 240 ) {
        printf("240 dollar");
    }
    else {
        if( i % 30 ) {
            int h = (( i / 30 ) + 1 );
            printf ("%d dollar", h );
        }
        else {
            printf("%d dollar", i);
        }
    }
    return 0;
}
