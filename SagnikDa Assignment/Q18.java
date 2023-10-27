//rotate an array to the right by a given number of positions
import java.util.*;
public class Q18
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int size;
        System.out.println("Enter the size");
        int[] arr = new int [size];
        System.out.println("Enter the array elements");
        for(int i = 0; i < size; i++)
            arr[i] = sc.nextInt();
        System.out.println("Shift by how many ");
        int x = sc.nextInt();
        while(x-->0)
        {
            int c = arr[size-1];
            for(int i = size-1;i>=1;i--)
            {
                arr[i] = arr[i-1];
            }
            arr[0] = c;
        }
        System.out.println("Rotated array is: ");
        for(int i = 0; i < size;i++)
        {
            System.out.print(arr[i]+" ")
        }
    }
}
//nb=