#include <stdio.h>
int main() {
    int password = 1234,h,i,c=0;
    for (i = 1; i <= 3; i++) {
        printf("\nEnter your pin:  ");
        scanf("%d", &h);

        if (h == password) {
            c = 1;
            printf("\nAccess Granted!\n");
            break; 
        } else {
            printf("\nIncprrect pin please try again.\n");
            if (i < 3) {
                continue; 
            }
        }
    }
    
    if (!c) {
        printf("\nYour card has been locked\n");
    }

    return 0;
}
