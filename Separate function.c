#include<stdio.h>
int add(int n1,int n2){
int sum;
sum=n1+n2;
return sum;
}
int Sub(int n1,int n2){
int sub;
sub=n1-n2;
return sub;
}
int mul(int n1,int n2){
int mul;
mul=n1*n2;
return mul;
}
int divide(int n1,int n2){
int divide;
divide=n1/n2;
return divide;
}

int main(){
    int num1,num2,op,ans;
    printf("Enter numbers: ");
    scanf("%d",&num1);
    printf("Enter numbers: ");
    scanf("%d",&num2);
    printf("1 for Addition\n2 for subtraction\n3 for multiplication\n4 for division\nEnter Number: ");
    scanf("%d",&op);

    switch(op) {
        case 1:
            ans=add(num1,num2);
             printf("THe Ans is %d",ans);
            break;
        case 2:
           printf("THe Ans is %d",Sub(num1,num2));
            break;
        case 3:
            ans=mul(num1,num2);
             printf("THe Ans is %d",ans);
            break;
        case 4:
            // Check for division by zero
            if(num2 != 0){
               ans=divide(num1,num2);
                printf("THe Ans is %d",ans);}
            else
                printf("Error! Division by zero is undefined.\n");
            break;
        default:
            printf("Invalid choice!\n");
           
            
}
return 0;
}
