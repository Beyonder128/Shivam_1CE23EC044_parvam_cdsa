#include<stdio.h>
int main(){
    int a;
    printf("Enter a postive number : ");
    scanf("%d",&a);
    if(a<=9){
        if(a==1)
            printf("One\n");
        if(a==2)
            printf("Two\n");
        if(a==3)
            printf("Three\n");
        if(a==4)
            printf("Four\n");
        if(a==5)
            printf("Five\n");
        if(a==6)
            printf("Six\n");
        if(a==7)
            printf("Seven\n");
        if(a==8)
            printf("Eight\n");
        if(a==9)
            printf("Nine\n");
    }
    else
        printf("Greater than 9");
}
