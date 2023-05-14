//program to check whether java is installed on our computer or not
class Question29 
{   
    public static void main(String[] args)
    {
        //checking whether java is installed or not.
        System.out.println("Java Version : "+System.getProperty("java.version"));
        System.out.println("Java Runtime Version : "+System.getProperty("java.runtime.version"));
        System.out.println("Java Home : "+System.getProperty("java.home"));
        System.out.println("Java Vendor : "+System.getProperty("java.vendor"));
        System.out.println("Java Vendor URL : "+System.getProperty("java.vendor.url"));
        System.out.println("Java Class Path : "+System.getProperty("java.class.path"));
    }
}