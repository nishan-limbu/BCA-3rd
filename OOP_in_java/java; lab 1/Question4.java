//program to print the result of the following operations.
class Question4
{
    public static void main(String[] args)
    {
        int result1,result2,result4;
        double result3;

        //printing all the expression.
        System.out.println("The following expressions are : ");
        System.out.println("a) (-5) + 8 * 6 = ?");
        System.out.println("b) (55 + 9) % 9 = ?");
        System.out.println("c) 20 + (-3) * 5 / 8 = ?");
        System.out.println("d) 5 + 15 / 3 * 2 - 8 % 3 = ?");
        System.out.println();

        //printing the results of the above expressions.
        System.out.println(" Answers:");
        result1=((-5) + (8 * 6));
        System.out.println("a) (-5) + 8 * 6 = "+result1);
        result2=(55 + 9) % 9;
        System.out.println("b) (55 + 9) % 9 = "+result2);
        result3= (20 + (-3) * (5 / 8));
        System.out.println("c) 20 + (-3) * 5 / 8 = "+result3);
        result4= 5 + (15 / 3) * 2 - 8 % 3;
        System.out.println("d) 5 + 15 / 3 * 2 - 8 % 3 = "+result4);

    }
}