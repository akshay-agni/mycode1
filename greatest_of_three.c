#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    printf("enter the value of c :");
    scanf("%d",&c);
    if((a>b) && (a>c)){
        printf(" %d a is greater than b and c",a);
    }
    else if((b>a) && (b>c)){
        printf("%d b is greater than a and c",b );
    }
    else{
        printf("%d c is greater than a and b",c);
    }
return 0;
}
