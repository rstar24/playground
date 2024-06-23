import java.util.*;
import java.security.*;
import java.util.Scanner;

interface MyInterface {
    public void display();
}

class example implements MyInterface {
    @Override
    public void display() {
        System.out.println("Hello, World!");
    }
    public void hello(){
        System.out.println("I  am something");
    }
}

public class LearnJava {
    public static void main(String[] args) {
        System.out.println("Hello, Java!");
        System.out.println("Integer " + 10 + 
        "\nDouble " + 3.14 +
        "\nBoolean " + true);

        // Scanner s = new Scanner(System.in);
        // System.out.println("Enter a number: ");
        // int num = s.nextInt();

        // System.out.println("You entered: " + num);  
        
        StringBuilder sb = new StringBuilder();

        sb.append("Hello, Rishabh having some fun with Java!");
        System.out.println(sb);

        // Remvoing something from the string 
        sb.delete(0, 5);

        // sb.toUpperCase();
        System.out.println(sb);

        String str1 = sb.toString();
        System.out.println(str1.toUpperCase());
        String str2 = sb.toString();
        System.out.println(str2.toLowerCase());

        final int x = 10;
        System.out.println(x);
    }
}