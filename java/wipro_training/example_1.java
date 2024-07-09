import java.io.*;
import java.util.*;

public class example_1 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        String str1 = s.nextLine();
        String str2 = s.nextLine();
        System.out.println(str1 + " Technologies " + str2);
        System.out.println("\nTHis is an example " + args[0]);
        System.out.println("\n Sum of numbers is " + (Integer.parseInt(args[1])+Integer.parseInt(args[2])));
    }
}