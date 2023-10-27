//to find the intersection of two arrays.
import java.util.*;
public class Q15
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
        int size2;
        System.out.println("Enter the size of the array2");
        size2 = sc.nextInt();
        int[] arr2 = new int[size2];
        System.out.println("Enter the array2 elements");
        for(int i = 0; i < size2; i++)
        {
            arr2[i] = sc.nextInt();
        }
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i = 0; i < size1; i++)
        {
            if(map.containsKey(arr1[i]))
                map.put(arr1[i],map.get(arr1[i])+1);
            else
                map.put(arr1[i],1);
        }
        for(int i = 0; i < size2; i++)
        {
            if(map.containsKey(arr2[i]))
                System.out.println(arr2[i]+" ");
                //map.put(arr1[i],map.get(arr1[i])+1);
        }
        // for(Map.Entry<Integer,Integer> entry: map.enterySet())
        // {
        //     if(entry.getValue()>1)
        //         System.out.println(entry.getKey()+" ");
        // }
    }
}
//nb=