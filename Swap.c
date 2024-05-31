#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Before Swapping:\na = %d\nb = %d\n",a,b);

    c = a;
    a = b;
    b = c;

    printf("After Swapping:\na = %d\nb = %d\n",a,b);
    return 0;
}
