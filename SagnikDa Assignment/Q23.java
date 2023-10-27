//matrix addition
import java.util.*;
public class Q23
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int r1;
        System.out.println("Enter size of 1st array");
        r1 = sc.nextInt();
        int[][] arr1 = new int[r1][r1];
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < r1; j++)
            {
                arr1[i][j] = sc.nextInt();
            }
        }
        int r2;
        System.out.println("Enter size of 2nd array");
        r2 = sc.nextInt();
        int[][] arr2 = new int[r2][r2];
        for(int i = 0; i < r2; i++)
        {
            for(int j = 0; j < r2; j++)
            {
                arr2[i][j] = sc.nextInt();
            }
        }
        if(r1 != r2)
            System.out.println("Addition not possible");
        else
        {
            int[][] arr3 = new int[r1][r1];
            for(int i = 0; i < r2; i++)
            {
                for(int j = 0; j < r2; j++)
                {
                    arr3[i][j] = arr1[i][j]+arr2[i][j];
                }
            }
        }
        
    }
}
//nb=