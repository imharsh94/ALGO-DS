// ! Rotation of array using a temporary matrix 

import java.util.Arrays;
import java.util.Scanner;

class Rotate{

    public static int[] rotateArray(int arr[], int d)
    {
        int n = arr.length;

        int temp[] = Arrays.copyOfRange(arr, 0, d);

        // Shifting elements
        for(int i=d; i<n ; i++)
            arr[i-d] = arr[i];

        //Copy shifted elements
        for(int i=n-d; i<n; i++)
            arr[i] = temp[i-(n-d)];

        return arr;
    }



    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d = sc.nextInt();
        int numbers[] = new int[n];

        for(int i=0; i<n ; i++)
            numbers[i] = sc.nextInt();

        numbers = rotateArray(numbers , d%n);

        for(int i: numbers)
            System.out.print(i + " ");
        System.out.println();

        sc.close();
    }
}