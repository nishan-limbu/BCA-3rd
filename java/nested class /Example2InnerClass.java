//example-2 of Inner class:
/*Program to calculate sum of numbers a and b. */
class Example2InnerClass
{
    
    class Sum
    {
        void Numbers()
        {
            int a=20,b=20,result;
            result=a+b;
            System.out.println("Sum of a and b="+result);
        }
    }
    public static void main(String[] args)
    {
        Example2InnerClass obj=new Example2InnerClass();
        Example2InnerClass.Sum obj2=obj.new Sum();
        obj2.Numbers();
    }
}