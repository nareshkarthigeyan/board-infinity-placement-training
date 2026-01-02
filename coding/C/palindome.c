#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    // printf("Number reciveved; %d\n", n);
    int num = n;
    int r, rev = 0;

    while(n != 0){
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }

    // printf("%d\n", rev);
    // printf("%d\n", num);

    if (rev == num) 
        printf("Palindrome!"); 
    else 
        printf("Not Palindrome!");
}