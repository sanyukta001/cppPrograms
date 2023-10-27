//remove duplicate elements from an array.
import java.util.*;
public class Q13
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
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i = 0; i < size1; i++)
        {
            if(map.containsKey(arr1[i]))
                map.put(arr1[i],map.get(arr1[i])+1);
            else
                map.put(arr1[i],1);
        }
        int[] arr2 = new int[map.size()];
        int k = 0;
        for(int i = 0; i < size1; i++)
        {
            if(map.get(arr1[i])!=0)
            {
                arr2[k++] = arr1[i];
                map.put(arr1[i],0);
            }
        }
        System.out.println("updated array is:");
        for(int i = 0; i < k; i++)
        {
            System.out.print(arr2[i]+" ");
        }
    }
}
//nb=