import java.io.*;

public class LearnfileReading {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new FileReader("example.txt"))){
            String line ;
            while ( (line = br.readLine()) != null ) {
                System.out.println(line);
            }                
            
        } catch (IOException e) {
            System.out.println("Unable to read file");
        }
    }
}