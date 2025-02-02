import java.util.Scanner;

public class Main {
    
    public static void printMatrix(int n) {
        int i=0;
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                i = i % 9 + 1;
                System.out.printf("%d ", i);
            }
            System.out.println();
        }
    }
    
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        printMatrix(n);
    }
}