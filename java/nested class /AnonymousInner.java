/*In simple words, a class that has no name is known as an anonymous inner class in Java. 
It should be used if you have to override a method of class or interface. 

Java Anonymous inner class can be created in two ways:
1. Class (may be abstract or concrete).
2. Interface
*/

//Java Anonymous inner class using class
// abstract class Nishan
// {
//     abstract void like();
// }
// class AnonymousInner
// {
//     public static void main(String[] args)
//     {
//         Nishan name=new Nishan()
//         {
//             void like()
//             {
//                 System.out.println("I love to code.");
//             }
//         };
//         name.like();
//     }
// }


//Java Anonymous inner class using interface
interface Nishan
{
    void like();
}
class AnonymousInner
{
    public static void main(String[] args)
    {
        Nishan name=new Nishan()
        {
            public void like()
            {
                System.out.println("I love to code.");
            }
        };
        name.like();
    }
}