package Statar_Pack;

import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int rev = 0;
        int rem;
        int temp = n;
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        if (rev == n) {
            System.out.println("Palinrome");
        } else {
            System.out.println("Not A palindrome");
        }
    }
}
