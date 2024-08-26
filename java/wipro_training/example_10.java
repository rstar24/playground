import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;
import java.io.IOException;

class A extends Thread {
    private Path filePath;

    public A(Path filePath) {
        this.filePath = filePath;
    }

    @Override
    public void run() {
        String temp = "Hi\n"; // Adding newline for separation
        for (int i = 0; i < 1000000; i++) { // Reduced loop for demonstration
            try {
                Files.write(filePath, temp.getBytes(), StandardOpenOption.CREATE, StandardOpenOption.APPEND);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}

class B extends Thread {
    private Path filePath;

    public B(Path filePath) {
        this.filePath = filePath;
    }

    @Override
    public void run() {
        String temp = "Hello\n"; // Adding newline for separation
        for (int i = 0; i < 1000000; i++) { // Reduced loop for demonstration
            try {
                Files.write(filePath, temp.getBytes(), StandardOpenOption.CREATE, StandardOpenOption.APPEND);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}

public class example_10 {
    public static void main(String[] args) {

        Path filePath1 = Paths.get("testfileA.txt");
        Path filePath2 = Paths.get("testfileB.txt");
        A obj1 = new A(filePath1);
        B obj2 = new B(filePath2);

        long startTime = System.nanoTime();

        obj1.start();
        obj2.start();

        // Wait for both threads to finish
        try {
            obj1.join();
            obj2.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        long endTime = System.nanoTime();

        long elapsedTime = endTime - startTime;
        double elapsedTimeInMs = elapsedTime / 1_000_000.0;

        // Print execution time
        System.out.println("Execution time: " + elapsedTimeInMs + " milliseconds");
    }

}
