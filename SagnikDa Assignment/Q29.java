//reverse a string 
import java.util.*;
public class Q29
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string");
        String s = sc.nextLine();
        String r = "";
        for(int i = s.length()-1;i>=0;i--)
        {
            r = r + s.charAt(i);
        }
        System.out.println("reversed string is "+r);
    }
}
//nb=