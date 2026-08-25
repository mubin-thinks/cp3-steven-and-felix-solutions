import java.util.Scanner;

class Program {
        public static void main(String args[]) {
                Scanner input = new Scanner(System.in);
                int c = 1, sum = 0;
                while (input.hasNext()) {
                        int k = input.nextInt();
                        while (k-- > 0) sum += input.nextInt();
                        System.out.println(sum);
                        sum = 0;
                }
        }
}
