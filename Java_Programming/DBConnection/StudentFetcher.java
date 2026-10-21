import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class StudentFetcher {

    // JDBC URL, username, and password
    private static final String URL      = "jdbc:mysql://localhost:3306/PPA55";
    private static final String USER     = "root";
    private static final String PASSWORD = "";

    public static void main(String[] args) {

        String query = "SELECT RNO, Name, City, Cid FROM studentX";

        // try-with-resources auto-closes Connection, Statement, ResultSet
        try (Connection con = DriverManager.getConnection(URL, USER, PASSWORD);
             Statement stmt = con.createStatement();
             ResultSet rs = stmt.executeQuery(query)) {

            System.out.printf("%-5s %-20s %-5s %-20s%n", "ID", "NAME", "AGE", "COURSE");
            System.out.println("---------------------------------------------------------");

            while (rs.next()) {
                int    RNO     = rs.getInt("RNO");
                String Name   = rs.getString("Name");
                String City   = rs.getString("City");
                int    Cid     = rs.getInt("Cid");

                System.out.printf("%-5d %-20s %-20s %-5d%n", RNO, Name, City, Cid);
            }

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}