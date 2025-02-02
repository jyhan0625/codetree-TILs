import java.util.Scanner;
import java.lang.Math;

public class Main {

    public static int GCD(int m, int n) {

        while (n != 0) {
            int temp = n;
            n = m % temp;
            m = temp;
            
        }

        return m;

    }

    public static void main(String[] args) {
        // Please write your code here.

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int a = Math.max(n, m);
        int b = Math.min(n, m);

        System.out.println(GCD(a, b));
    }

}