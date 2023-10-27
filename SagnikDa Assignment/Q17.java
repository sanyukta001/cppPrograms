//largest and smallest element in array
import java.util.*;
public class Q17
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int size1;
        System.out.println("Enter the size of the array1");
        size1 = sc.nextInt();
        int[] arr1 = new int[size1];
        System.out.println("Enter the array1 elements");
        for(int i = 0; i < size1; i++)
        {
            arr1[i] = sc.nextInt();
        }
        Arrays.sort(arr1);
        System.out.println("Smallest is "+ arr1[0]+" largest is "+arr1[size1-1]);
    }
}
//nb=