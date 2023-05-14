//program to display the current date time in specific format
import java.text.*;
import java.util.*;
class Question43 
{
    public static void main(String[] args)
    {
        Date d = new Date();
        SimpleDateFormat a = new SimpleDateFormat("dd/MM/yyyy");
        System.out.println("Date : "+a.format(d));
    }
} 