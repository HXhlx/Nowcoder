import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt(), b = scanner.nextInt();
        scanner.close();
        // write your code here......
        if (a < b) {
            int c = a;
            a = b;
            b = c;
        }
        System.out.printf("%d %d %d %d %d", a + b, a - b, a * b, a / b, a % b);
    }
}