public class HelloWorld {

    public static void main(String[] args) {
        // This is a multi-line comment
        /* 
         * This is another multi-line comment.
         * It can span multiple lines.
         */

        // Declare and initialize a variable
        int number = 42; 

        // Print a message to the console
        System.out.println("Hello, World!"); 
        System.out.println("This is a Java program.");

        // Print the value of the variable
        System.out.println("The value of number is: " + number);

        // Perform a simple calculation
        int sum = 10 + 20;
        System.out.println("The sum of 10 and 20 is: " + sum);

        // Conditional statement (if-else)
        if (number > 0) {
            System.out.println("The number is positive.");
        } else if (number < 0) {
            System.out.println("The number is negative.");
        } else {
            System.out.println("The number is zero.");
        }

        // Loop (for loop)
        for (int i = 0; i < 5; i++) {
            System.out.println("Iteration: " + i);
        }

        // Array
        int[] numbers = {1, 2, 3, 4, 5};
        System.out.println("First element of the array: " + numbers[0]); 

        // Method call
        greet("User"); 

        // Create an object of a class (if you have a separate class)
        // MyClass myObject = new MyClass(); 
        // myObject.doSomething(); 
    }

    // Define a method
    public static void greet(String name) {
        System.out.println("Hello, " + name + "!");
    }
}