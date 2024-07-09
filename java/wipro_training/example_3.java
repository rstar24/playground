
import java.util.*;

public class example_3 {
    static int fun(String s) {
        String s1 = s + '\0';
        char c;
        int i = 0;
        // while (c != '\0') {
        // c = s.charAt(i);
        // i++;
        // }

        try {
            do {
                c = s1.charAt(i);
                i++;
            } while (c != '\0');
        } catch (Exception e) {
            // TODO: handle exception
        }
        return i;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String ");
        String str = sc.nextLine();

        System.out.println("The length " + fun(str));
    }

}
