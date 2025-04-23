import java.util.Scanner;

public class linearSearch {

    public int linearsrch(int[] a, int key){
            for (int i = 0; i < a.length; i++) {
                if (key == a[i]) {
                return 1;
            }
        }
    }


    public static void main(String args[]) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of array elements : ");
        n = sc.nextInt();
        int[] a = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int key;

        System.out.print("Enter the number of key : ");
        key = sc.nextInt();
        
        
    }
}
