class MyThread extends Thread {
    public MyThread(String name) {
        super(name);
    }

    public void run() {
        System.out.println("Thread " + getName() + " is running with priority " + getPriority());
    }
}

public class Main {
    public static void main(String[] args) {
        // Creating threads
        MyThread thread1 = new MyThread("Thread 1");
        MyThread thread2 = new MyThread("Thread 2");
        MyThread thread3 = new MyThread("Thread 3");

        // Setting priorities
        thread1.setPriority(Thread.MAX_PRIORITY); // 10
        thread2.setPriority(Thread.NORM_PRIORITY); // 5
        thread3.setPriority(Thread.MIN_PRIORITY); // 1

        // Starting threads
        thread1.start();
        thread2.start();
        thread3.start();
    }
}
