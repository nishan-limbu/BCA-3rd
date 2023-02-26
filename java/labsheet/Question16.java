class Triangle
{
    public Triangle(int a, int b, int c)
    {
        int perimeter=a+b+c;
        System.out.println("Perimeter of a traingle: "+perimeter);
        
        //printing area of a traingle
        if((a+b)>c && (a+c)>b && (b+c)>a)
          {
            int s=(a+b+c)/2;
            double  area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
             System.out.println("Area of Triangle is: " + area);    
           }
         else  
           System.out.println("Area of Triangle not exit");

    }
}
class Question16
{
    public static void main(String [] args)
    {
        Triangle obj = new Triangle(3,4,5);
        System.out.print(obj);
    }
}