import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Path;
import java.nio.file.Paths;

class SharedFileWriter {
    private BufferedWriter writer;

    public SharedFileWriter(Path filePath) throws IOException {
        // Initialize BufferedWriter with append mode
        this.writer = new BufferedWriter(new FileWriter(filePath.toFile(), true));
    }

    public synchronized void write(String message) throws IOException {
        writer.write(message);
    }

    public void close() throws IOException {
        writer.close();
    }
}

class A extends Thread {
    private SharedFileWriter fileWriter;

    public A(SharedFileWriter fileWriter) {
        this.fileWriter = fileWriter;
    }

    @Override
    public void run() {
        String temp = "Hi\n"; // Adding newline for separation
        for (int i = 0; i < 1000000; i++) {
            try {
                fileWriter.write(temp);
                if (i % 100000 == 0) {
                    System.out.println("A thread iteration: " + i);
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}

class B extends Thread {
    private SharedFileWriter fileWriter;

    public B(SharedFileWriter fileWriter) {
        this.fileWriter = fileWriter;
    }

    @Override
    public void run() {
        String temp = "Hello\n"; // Adding newline for separation
        for (int i = 0; i < 1000000; i++) {
            try {
                fileWriter.write(temp);
                if (i % 100000 == 0) {
                    System.out.println("B thread iteration: " + i);
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}

public class example_10 {
    public static void main(String[] args) {
        Path filePath = Paths.get("testfile.txt");
        SharedFileWriter fileWriter = null;

        try {
            fileWriter = new SharedFileWriter(filePath);

            A obj1 = new A(fileWriter);
            B obj2 = new B(fileWriter);

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

        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            if (fileWriter != null) {
                try {
                    fileWriter.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
