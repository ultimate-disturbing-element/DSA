package Statar_Pack;
import java.util.*;

public class swapNowithOutUsingThirdVariable {
    public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter element A");
    int a = sc.nextInt();
    System.out.println("Enter element B");
    int b = sc.nextInt();

     a = a+b;
     b = a-b;
     a =  a-b;

    System.out.println("After Swapping A = "+a+" B = "+b);
}
}
