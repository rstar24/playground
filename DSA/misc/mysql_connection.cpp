#include <mysql.h>
#include <stdio.h>

int main() {
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    const char *server = "localhost";
    const char *user = "root";
    const char *password = "2401";  // Replace with your MySQL password
    const char *database = "employees";  // Replace with your database name

    conn = mysql_init(NULL);

    // Connect to database
    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        return 1;
    }

    // Send SQL query
    if (mysql_query(conn, "SELECT * FROM your_table")) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        return 1;
    }

    res = mysql_store_result(conn);

    // Output table name
    while ((row = mysql_fetch_row(res)) != NULL)
        printf("%s \n", row[0]);

    // Clean up
    mysql_free_result(res);
    mysql_close(conn);

    return 0;
}
