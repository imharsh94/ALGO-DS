import java.util.Scanner;


public class Consecutive
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while((t--) != 0)
        {
            String str = sc.next();
           String op="";

           for(int i=0; i<str.length()-1; i++)
            {
            if(str.charAt(i) != str.charAt(i+1))
                op = op + str.charAt(i);
            }
        //if(str.charAt(str.length()-1) != str.charAt(str.length()-2))
            op = op + str.charAt(str.length()-1);
        System.out.println(op);
        }
        
    }
}