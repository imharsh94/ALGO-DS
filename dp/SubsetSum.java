public class SubsetSum{

    public boolean canPartition(int num[]){
        int sum = 0;

        for(int i=0; i<num.length ; i++)
            sum += num[i];

        if(sum % 2 != 0)
            return false;

        Boolean dp[][] = new Boolean[num.length][sum/2 + 1];
        return this.partition(dp,num , sum/2 , 0);
    }

    public boolean partition(Boolean dp[][], int num[] , int sum, int index){
        if(sum == 0)
            return true;
        
        if(num.length == 0 || index >= num.length)
            return false;


        if(dp[index][sum] == null){
            if(num[index] <= sum){
                if(partition(dp,num, sum - num[index], index + 1)){
                    dp[index][sum] = true;
                    return true;
                }
              }
            //  else{
              dp[index][sum] = partition(dp, num, sum, index+1);
            //  }
               
        }
        return dp[index][sum];

    }

    public static void main(String args[]){
        SubsetSum s = new SubsetSum();
        int num[] = {1,2,3,8};
        System.out.println(s.canPartition(num));
    }
}