import java.util.*;
public class BubbleSort {
    public static void Sort(int num[], int length)
    {
        for(int i=0; i<length-1; i++) //Number of turns
        {
        for(int j=0; j<length-1-i; j++)
        {
            if(num[j] > num[j+1]) //Swapping logic
            {
                int tmp = num[j+1]; 
                num[j+1] = num[j];
                num[j] = tmp;
            }
        }
        }
        for(int i=0; i<length; i++) //Print result
        {
            System.out.print(num[i]+", ");
        }
        System.out.println();
    }
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter length of the array:");
        int length=in.nextInt();
        int num[] = new int[length];
        for(int k=0; k<length; k++) //Inputing numbers
        {
            System.out.println("Enter a number");
            num[k] = in.nextInt();
        }
        System.out.println("Sorted Array:");
        Sort(num, length);
    }
}
