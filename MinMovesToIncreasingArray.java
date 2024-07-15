import java.util.Scanner;

public class MinMovesToIncreasingArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        long moves = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                moves += arr[i - 1] - arr[i];
                arr[i] = arr[i - 1];
            }
        }
        
        System.out.println(moves);
        scanner.close();
    }
}
