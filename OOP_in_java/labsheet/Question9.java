import java.io.*;  
class Area{
    void Area(int l,int b)
    {
        int area = l*b;
        System.out.print("Area of a room = "+ area);
    }
}


public class Question9 {   
    public static void main(String args[])throws Exception{             
        InputStreamReader r=new InputStreamReader(System.in);    
        BufferedReader br=new BufferedReader(r);            
        System.out.println("Enter length of room: ");    
        String length=br.readLine();    
        System.out.println("Enter breadth of room: ");    
        String breadth=br.readLine();  
        Area obj = new Area();
        obj.Area(length,breadth);

    }    

}
