import java.sql.DriverManager;
import java.sql.SQLException;

public class check_connection {
    public static void main(String[] args) {
        try {
            // Attempt to load the JDBC driver
            Class.forName("com.mysql.cj.jdbc.Driver"); // Example for MySQL, change if using a different driver

            System.out.println("JDBC driver is installed and available.");
        } catch (ClassNotFoundException e) {
            System.out.println("JDBC driver is not installed or not found.");
            e.printStackTrace();
        }
    }
}
