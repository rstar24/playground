import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class database_foo {
    public static void main(String[] args) {
        // JDBC URL, username, and password of MySQL server
        String url = "jdbc:mysql://localhost:3306/employees"; // Update with your database URL
        String user = "root"; // Update with your database username
        String password = "2401"; // Update with your database password

        // Load the JDBC driver
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
            System.out.println("JDBC Driver not found.");
            return;
        }

        // Establish the connection
        try (Connection connection = DriverManager.getConnection(url, user, password)) {
            // Create a statement object to execute SQL queries
            Statement statement = connection.createStatement();

            // Execute a query
            String query = "SELECT * FROM EMPLOYEES LIMIT 10"; // Update with your table name
            ResultSet resultSet = statement.executeQuery(query);

            // Process the result set
            while (resultSet.next()) {
                String emp_id = resultSet.getString("emp_id"); // Replace "ID" with your column name
                String first_name = resultSet.getString("first_name"); // Replace "Name" with your column name
                String last_name = resultSet.getString("last_name"); // Replace "Name" with your column name
                System.out.println("ID: " + emp_id + ", Name: " + first_name + " " + last_name);
            }

            // Close the result set and statement
            resultSet.close();
            statement.close();
        } catch (SQLException e) {
            e.printStackTrace();
            System.out.println("Database connection or query failed.");
        }
    }

}
