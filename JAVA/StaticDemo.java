/*Write a program to demonstrate the use of static variable, static method and
static block.*/

public class StaticDemo {

    // Static variable
    static int staticVariable = 10;

    // Static block
    static {
        System.out.println("This is a static block.");
        System.out.println("Initializing staticVariable: " + staticVariable);
    }

    // Static method
    static void staticMethod() {
        System.out.println("This is a static method.");
        System.out.println("Value of staticVariable inside staticMethod: " + staticVariable);
    }

    public static void main(String[] args) {
        // Accessing static variable
        System.out.println("Value of staticVariable in main method: " + staticVariable);

        // Accessing static method
        staticMethod();

        // Modifying static variable
        staticVariable = 20;

        // Accessing static variable again
        System.out.println("Updated value of staticVariable: " + staticVariable);
    }
}
