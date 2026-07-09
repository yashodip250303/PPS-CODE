#include <stdio.h>
int main(){
    int percent;
    printf("Enter percent: ");
    scanf("%d", &percent);

    if (percent > 100) {
        printf("Invalid marks entered.\n");
    } else if (percent >= 90) {
        printf("Grade: A+\n");
    } else if (percent >= 80) {
        printf("Grade: A\n");
    } else if (percent >= 70) {
        printf("Grade: B\n");
    } else if (percent >= 60) {
        printf("Grade: C\n");
    } else if (percent >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
