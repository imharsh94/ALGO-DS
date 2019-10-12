import java.util.Scanner;

public class Giraffe
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int curr = 0;
        int len = 1;
        int max = 0;

        while(n-- > 0)
        {
            int a = sc.nextInt();
            if(a == curr+1)
                len++;
            else{
                max = Math.max(max,len-2);
                len=1;
            }
            curr=a;
        }
        if(curr == 1000) len++;
        max = Math.max(max, len-2);
        System.out.println(max);
        sc.close();
    }
}