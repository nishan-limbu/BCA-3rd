//program to return the value from the method
class Return_method 
{
    public static void main(String[] args)
    {
        int x=50;
        int y=60;
        int result=max(x,y);
        System.out.println("Greater number is "+result);
    }
    public static int max(int x,int y)
    {
        if(x>y)
            return x;
        else
            return y;
    }
    
}