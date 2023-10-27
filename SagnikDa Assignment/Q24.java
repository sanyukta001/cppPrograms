//frequency of each element in an array
import java.util.*;
public class Q24
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
        for(int i = 0;i < size1;i++)
        {
            if(map.get(arr1[i]) != 0)
            {
                System.out.println(arr[i] + " : "+map.get(arr1[i]));
                map.put(arr1[i],0);
            }
        }
    }
}
//nb=