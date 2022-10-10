
import java.util.*;
class PallindromeNum
{
    public static void main(String args[])
    {
        int x,y,digit,reverse=0;
        System.out.println("Enter number:");
        Scanner sc=new Scanner(System.in);
        x=sc.nextInt();
        y=x;
        while(x>0)
        {
            digit=x%10;
            reverse=reverse*10+digit;
            x/=10;
        }
        if(y==reverse)
        {
            System.out.print("True");
        }
        else{
            System.out.print("False");
        }
    }
}   