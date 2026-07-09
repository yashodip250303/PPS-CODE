#include <stdio.h>
int main(){
    int i,j,k;
    for(i=5;i>=1;i--){
        for(k=0 ;k<5-i;k++){
            printf("\t");
        }
        for(j=0;j<i;j++){
            printf("*\t");
        }
        printf("\n");
    }
}
