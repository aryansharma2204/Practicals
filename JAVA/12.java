//WAP to use super() to invoke base class constructor

class Parent {
    int parentVar;

    // Constructor of Parent class
    Parent(int parentVar) {
        this.parentVar = parentVar;
        System.out.println("Parent class constructor invoked with value: " + parentVar);
    }
}

class Child extends Parent {
    int childVar;

    // Constructor of Child class
    Child(int parentVar, int childVar) {
        super(parentVar); // Invoking Parent class constructor
        this.childVar = childVar;
        System.out.println("Child class constructor invoked with value: " + childVar);
    }
}

public class SuperDemo {
    public static void main(String[] args) {
        Child child = new Child(10, 20);
        System.out.println("Values in Child: parentVar = " + child.parentVar + ", childVar = " + child.childVar);
    }
}
