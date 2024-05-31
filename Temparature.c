#include<stdio.h>
int main(){
    int n,f;
    printf("Enter the temperature in centigrade: ");
    scanf("%d",&n);
    
    f = ((9 * n) / 5) + 32;

    printf("The Fahrenheit temperature is: %d",f);
    return 0;
}
