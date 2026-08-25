import java.util.Scanner;

class Program {
        public static void main(String args[]) {
                Scanner input = new Scanner(System.in);
                int c = 1;
                while (input.hasNext()) {
                        int a = input.nextInt(), b = input.nextInt();
                        if (c > 1) System.out.println();
                        System.out.printf("Case %d: %d\n", c++, a + b);
                }
        }
}
