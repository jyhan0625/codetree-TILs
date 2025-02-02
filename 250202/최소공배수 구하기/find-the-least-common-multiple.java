import java.util.Scanner;
import java.lang.Math;

public class Main {

    public static int GCD(int m, int n) {

        while(n != 0) {
            int temp = m;
            m = n;
            n = temp % n;
        }

        return m;
    }

    public static void main(String[] args) {
        // Please write your code here.
        
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        int gcd = GCD(Math.max(a, b), Math.min(a, b));

        System.out.println(gcd * (a / gcd) * (b / gcd));


    }
}