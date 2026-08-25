import java.util.Scanner;

class Program {
        public static void main(String args[]) {
                Scanner input = new Scanner(System.in);
                int c = 1;
                while (input.hasNext()) {
                        int a = input.nextInt(), b = input.nextInt();
                        System.out.printf("Case %d: %d\n\n", c++, a + b);
                }
        }
}
