import java.io.*;
import java.util.*;
import java.math.*;
public class LongestCommonSubsequence
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String str1,str2;
        System.out.println("Enter the String 1");
        str1=s.next();
        System.out.println("Enter the Stringn 2");
        str2=s.next();
        System.out.println("The length of longest common Subsequence is "+LCS(str1,str2));
    }
    public static int LCS(String str1,String str2)
    {
        int m=str1.length();
        int n=str2.length();
        int[][] arr=new int[m+1][n+1];
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(str1.charAt(i-1)==str2.charAt(j-1))
                {
                    arr[i][j]=1+arr[i-1][j-1];     
                }
                else
                {
                    arr[i][j]=Math.max(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
        return arr[m][n];
    }
}
/*

The Time Complexity of above algorithm is O(m*n)

The Space Complexity of above algorithm is O(m*n)

Its possible to possible to print the longest common subsequence .

Space optimized solution for LongestCommonSubsequence also exists .
*/