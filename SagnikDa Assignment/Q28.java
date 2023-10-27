//palindrome string or not
import java.util.*;
public class Q28
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string");
        String s = sc.nextLine();
        int i = 0;
        int j = s.length()-1;
        int flag = 1;
        while(i<j)
        {
            if(s.charAt(i)!=s.charAt(j))
            {
                flag = 0;
                System.out.println("not palindrome");
            }
            i++;
            j--;
        }
        if(flag == 1)
            System.out.println("Palindrome");
    }
}
//nb=