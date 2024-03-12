//WAP to demonstrate multi level and hierarchical inheritance

// Parent class
class Animal {
    void eat() {
        System.out.println("Animal is eating...");
    }
}

// Child class inheriting from Animal
class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking...");
    }
}

// Child class inheriting from Animal
class Cat extends Animal {
    void meow() {
        System.out.println("Cat is meowing...");
    }
}

// Sub-child class inheriting from Dog
class Labrador extends Dog {
    void play() {
        System.out.println("Labrador is playing fetch...");
    }
}

// Sub-child class inheriting from Cat
class PersianCat extends Cat {
    void groom() {
        System.out.println("Persian cat is grooming itself...");
    }
}

public class InheritanceDemo {
    public static void main(String[] args) {
        // Multi-level inheritance
        Labrador labrador = new Labrador();
        labrador.eat();  // Accessing method from Animal class
        labrador.bark(); // Accessing method from Dog class
        labrador.play(); // Accessing method from Labrador class

        System.out.println();

        // Hierarchical inheritance
        PersianCat persianCat = new PersianCat();
        persianCat.eat(); // Accessing method from Animal class
        persianCat.meow(); // Accessing method from Cat class
        persianCat.groom(); // Accessing method from PersianCat class
    }
}
