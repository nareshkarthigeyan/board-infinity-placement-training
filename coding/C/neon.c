#include <stdio.h>

int neon(int n){
    int neon = n * n;
    int r, sum = 0;

    while(neon != 0){
        r = neon % 10;
        sum += r;
        r /= 10;
    }

    if (sum == n){
        return 1;
    }
    return 0;
}

int main(){
    
    int n;
    scanf("%d", &n);

    if (neon(n) == 1){
        printf("Neon!");
    } else {
        printf("Not Neon!!");
    }
}