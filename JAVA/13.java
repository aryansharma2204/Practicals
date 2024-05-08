// Importing necessary libraries
import java.util.concurrent.*;

// Creating a class that implements Runnable interface
class MyThread implements Runnable {
    private String threadName;

    // Constructor to initialize thread name
    MyThread(String name) {
        threadName = name;
    }

    // Run method where the thread execution will occur
    public void run() {
        System.out.println("Thread " + threadName + " is running.");
        try {
            // Simulating some task execution time
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            System.out.println("Thread " + threadName + " interrupted.");
        }
        System.out.println("Thread " + threadName + " exiting.");
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println("Main thread is running.");

        // Creating new threads
        MyThread thread1 = new MyThread("Thread 1");
        MyThread thread2 = new MyThread("Thread 2");

        // Creating thread objects
        Thread t1 = new Thread(thread1);
        Thread t2 = new Thread(thread2);

        // Starting threads
        t1.start();
        t2.start();

        // Waiting for threads to finish
        try {
            t1.join();
            t2.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted.");
        }

        System.out.println("Main thread exiting.");
    }
}
