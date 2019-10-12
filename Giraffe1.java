import java.util.Scanner;

public class Giraffe1
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int [n];

        for(int i=0 ; i<n; i++)
            arr[i] = sc.nextInt();

        int ans=0;
        for(int i=0 ; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j] - arr[i] == j-i && (arr[i]==1 || arr[j]==1000))
                    ans = Math.max(j-i, ans);
                else if(arr[j]-arr[i] == j-i)
                    ans = Math.max(ans, j-i-1);

            }
        }
        System.out.println(ans);

    }
}