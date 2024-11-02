//{ Driver Code Starts
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        while (t-- > 0) {
            // Read array input
            String input = scanner.nextLine();
            String[] inputArray = input.split(" ");
            long[] arr = new long[inputArray.length];
            for (int i = 0; i < inputArray.length; i++) {
                arr[i] = Long.parseLong(inputArray[i]);
            }

            Solution solution = new Solution();
            System.out.println(solution.countFibonacciNumbers(arr));
            System.out.println("~");
        }

        scanner.close();
    }
}

// } Driver Code Ends


class Solution {
    // Helper method to check if a number is a perfect square
    private boolean isPerfectSquare(long num) {
        long n = (long)Math.sqrt(num);
        return (n * n == num);
    }

    // Method to count how many Fibonacci numbers are present in the array
    public int countFibonacciNumbers(long[] arr) {
        int count = 0;
        for (long num : arr) {
            // Check if the number is a Fibonacci number using a property of Fibonacci
            // numbers
            if (isPerfectSquare(5 * num * num + 4) ||
                isPerfectSquare(5 * num * num - 4)) {
                count++;
            }
        }
        return count;
    }
}
