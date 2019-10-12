import java.util.Scanner;

class Pair
{
    int x=0;
    int y=0;
    Pair(int x,int y)
    {
        this.x=x;
        this.y=y;

    }
}

public class Robot
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int x = sc.nextInt();
        int y = sc.nextInt();
        int X = 0 , Y=0;

        Pair pre[] = new Pair [n+1];
        pre[0] = new Pair(0, 0);

        for(int i=0; i<n; i++)
        {
            if(s.charAt(i)=='R') X++;
            if(s.charAt(i)=='L') X--;
            if(s.charAt(i)=='U') Y++;
            if(s.charAt(i)=='D') Y--;
            pre[i+1] = new Pair(X,Y);
        }

        int dx = X;
        int dy = Y;
        int lo = 0;
        int hi = n;
        int max = Integer.MAX_VALUE;

        while(lo<=hi)
        {
            int mid = lo+ (hi-lo)/2;
            boolean f = false ;

            for(int i=0 ; i+mid<=n ; i++)
            {
                dx = X;
                dy = Y;

                dx -= (pre[i+mid].x - pre[i].x);
                dy -= (pre[i+mid].y - pre[i].y);

                if(mid - Math.abs(x-dx)-Math.abs(y-dy)>=0 &&(mid - Math.abs(x-dx)-Math.abs(y-dy))%2==0 )
                {
                    max = Math.min(max, mid);
                    f = true;
                    break;
                }
            }

            if(f) hi = mid-1;
            else lo = mid+1;

        }
        System.out.println(max==Integer.MAX_VALUE ? -1:max);

    }
}