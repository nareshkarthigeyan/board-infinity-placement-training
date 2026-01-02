#include <stdio.h>
#include <math.h>

int length(int n){   
    int i = 0;
    while(n != 0){
        i++;
        n /= 10;
    }
    return i;
}

int armstrong(int n, int l){
    int sum = 0;
    for(int i  = 0; i < l; i++){
        int r = n % 10;
        sum += pow(r, l);
        n /= 10;
    }
    return sum;
}

int main(){
    int n, num;
    scanf("%d", &n);

    if(n == armstrong(n, length(n))){
        printf("Armstrong!");
    } else {
        printf("Not Armstrong!");
    }
}