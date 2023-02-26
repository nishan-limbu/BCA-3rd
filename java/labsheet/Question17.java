import java.util.Scanner;
class student
{
    void student()
    {
        String name;
        int roll;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter total number of students: ");
        int n = sc.nextInt();  

        for (int i = 1; i <=n; i++)   
        {  
            System.out.print("Student-"+i+":");
            System.out.print("student: ");
            name = sc.nextLine();
            System.out.println("Enter roll no: ");
            roll= sc.nextInt();
        }
        for (int i = 1; i <=n; i++)   
        {  
            System.out.print("Student-"+i+":");
            System.out.print("Name : "+name);
            System.out.print("Roll Number: "+roll);
        }
        
    }

}
public class Question17 {
    public static void main(String [] args)
    {
        student obj = new student();
        obj.student();      
    
    }
}
