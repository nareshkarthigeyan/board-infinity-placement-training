import java.util.Scanner;

class Armstrong{
    public static int length(int n){   
        int i = 0;
        while(n != 0){
            i++;
            n /= 10;
        }
        return i;
    }

    public static int armstrong(int n, int l){
        int sum = 0;
        for(int i  = 0; i < l; i++){
            int r = n % 10;
            sum += pow(r, l);
            n /= 10;
        }
        return sum;
    }

    public static void main(){
        int n, num;
        scanf("%d", &n);

        if(n == armstrong(n, length(n))){
            printf("Armstrong!");
        } else {
            printf("Not Armstrong!");
        }
    }   
}