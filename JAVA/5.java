//write a program to arrange the name of states alphabetically take input from user, and without function

import java.util.Scanner;

public class StateNamesSorting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of states: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        String[] states = new String[n];

        // Input state names
        System.out.println("Enter the names of the states:");
        for (int i = 0; i < n; i++) {
            states[i] = scanner.nextLine();
        }

        // Sorting the states array alphabetically
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (states[j].compareTo(states[j + 1]) > 0) {
                    // Swap states[j] and states[j+1]
                    String temp = states[j];
                    states[j] = states[j + 1];
                    states[j + 1] = temp;
                }
            }
        }

        // Output sorted state names
        System.out.println("States sorted alphabetically:");
        for (String state : states) {
            System.out.println(state);
        }

        scanner.close();
    }
}
