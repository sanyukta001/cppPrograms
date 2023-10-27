//count consonant and vowel in a string
import java.util.*;
public class Q27
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string");
        String s = sc.nextLine();
        int c = 0, v = 0;
        for(int i = 0;i<s.length();i++)
        {
            char x = s.charAt(i);
            if(x == 'a'||x == 'e' || x == 'i'||x =='o'|| x == 'u'||
             x == 'A'||x == 'E'||x == 'I'||x == 'O'||x == 'U');
                v++;
            else if(x!=' ')
                c++;
        }
        System.out.println("Vowels are "+v+" consonants are "+ c);
    }
}
//nb=