class Palindrome {
    public static void main(String args[]){
        int num1 = 7543
        int  = 3457

        computePalindrome(num1, num2);
    }

    public static computePalindrome(int num1, int num2){
        int num3 = 0;
        while(num1 != 0){
            num3 *= 10;
            num3 += num1 % 10;
            num1 /= 10;
        }
        if (num3 == num2){
            System.out.println("It is a Palindrome");
        } else {
            System.out.println("It is not a Palindrome");
        }
    }
}