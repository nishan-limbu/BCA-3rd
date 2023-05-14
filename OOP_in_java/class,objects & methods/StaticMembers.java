/*
Program defining and using Static Members
(Static Members are common to all the variables and methods.)


[NOTE:
        Static methods are clalled using class names.
        In fact, no objects have been created for use.
        Static methods have several restrictions:
            1. They can only call other static methods.
            2. They can only access static data.
            3. They cannot refer to (this) or (super) in any way.
]
*/
class MathOperation
{
    static float mul(float x,float y)
    {
        return x*y;
    }
    static float divide(float x,float y)
    {
        return x/y;
    }
}
class StaticMembers
{
    public static void main(String[] args)
    {
        float a=MathOperation.mul(4,5);
        float b=MathOperation.divide(50,10);

        //printing the outputs
        System.out.println("a="+a);
        System.out.println("b="+b);
    }
}