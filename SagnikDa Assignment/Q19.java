//sum of diagonal elements of a matrix
import java.util.*;
public class Q19
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int r;
        System.out.println("Enter size");
        r = sc.nextInt();
        int[][] arr = new int[r][r];
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < r; j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }
        int i = 0, j = r-1, d1 = 0;
        int k = 0, l = 0, d2 = 0;
        while(k < size && l < size)
        {
            d1 = arr[i][j];
            i++;
            j--;
            d2 = arr[k][l];
            k++;
            l++;
        }
        System.out.println("The sum of diagonals are "+d1+" and "+d2);
    }
}
//nb=