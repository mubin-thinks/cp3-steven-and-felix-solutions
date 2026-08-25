import java.util.Scanner;

class Program {
        public static void main(String args[]) {
                Scanner input = new Scanner(System.in);
                while (input.hasNext()) {
                        int a = input.nextInt(), b = input.nextInt();
                        System.out.println(a + b);
                }
        }
}
