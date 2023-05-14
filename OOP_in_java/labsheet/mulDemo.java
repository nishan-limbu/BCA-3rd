// question 3
import java.util.Scanner;  
class mulAccept
{
    void display(int n, String str)
    {

        System.out.print("Printing single String:");
        System.out.print("Your integer is "+n);
        System.out.print("Your string is "+str);

        // System.out.print("Printing Multiple String:");
        // System.out.print("Your integer is "+n);
        // System.out.print("Your string is ");
        // for(String val : string)
        // {
        //     System.out.print(" "+val);   
        // }

    }
}
class mulDemo{
    public static void main(String [] args)
    {
       mulAccept obj = new mulAccept();
    
       obj.display(100,"Nishan");
    //    obj.display(200,"Nishan","Limbu");
    }
}