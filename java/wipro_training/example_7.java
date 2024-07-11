
// Making a library managmenet system
import java.util.Scanner;

interface authentication {
    public void logIn();
}

// For the librarian
class admin implements authentication {
    String userName;
    String password;

    public void logIn() {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the Username : ");
        this.userName = s.nextLine();
        System.out.println("Enter the Password : ");
        this.password = s.nextLine();
        s.close();

    }
}

// A base class for managing user records
class user implements authentication {
    String userName;
    String password;

    public void logIn() {
        Scanner s = new Scanner(System.in);
        System.out.println("Welcome Student!");
        System.out.println("Enter the Username : ");
        this.userName = s.nextLine();
        System.out.println("Enter the Password : ");
        this.password = s.nextLine();
        s.close();

    }

}

class students extends user {
    String type = "students";

}

class faculty extends user {
    String type = "faculty";

    public void logIn() {
        Scanner s = new Scanner(System.in);
        System.out.println("Welcome Teacher!");
        System.out.println("Enter the Username : ");
        this.userName = s.nextLine();
        System.out.println("Enter the Password : ");
        this.password = s.nextLine();
        s.close();
    }

}

// Interfaces to populate

public class example_7 {

    public static void main(String[] args) {

        user u1 = new user();
        u1.logIn();

    }

}
