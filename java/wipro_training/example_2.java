import java.util.*;

class dumb {
    static void fun2() {
        System.out.println("FUn 2 ");
    }
}

public class example_2 {
    static void fun() {
        System.out.println("hello");
        System.out.println("hello");
        System.out.println("hello");
        System.out.println("hello");
        System.out.println("hello");
    }

    public static void main(String[] args) {

        String c;
        Scanner s = new Scanner(System.in);
        c = s.nextLine();
        switch (c) {
            case "a":
            case "A":
            case "e":
            case "E":
            case "i":
            case "I":
            case "o":
            case "O":
            case "u":
            case "U":
                System.out.println("vowel");
                break;
            default:
                System.out.println("consonant");
                break;
        }

        fun();
        dumb.fun2();
    }

}
