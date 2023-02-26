//program to count letters, spaces, numbers and other characters of an input string
class Question36 
{
    public static void main(String[ ] args)
    {
        String sentence = "My name is Nishan Limbu. I am 22 years old. Email: Kathmandu123@gmail.com and Password: 123!@#Nepal.";
        System.out.println("String is :\nMy name is Nishan Limbu. I am 22 years old. \nEmail: Kathmandu123@gmail.com and Password: 123!@#Nepal.");
        System.out.println();
        Count(sentence);
    }  
    public static void Count(String str)
    {
        char[] character = str.toCharArray();
        int letter =0, space=0, number=0,specialchar=0;
        for(int i=0;i<str.length();i++)
        {
            if(Character.isLetter(character[i]))
            {
                letter++;
            }
            else if(Character.isDigit(character[i]))
            {
                number++;
            }
            else if(Character.isSpaceChar(character[i]))
            {
                space++;
            }
            else
            {
                specialchar++;
            }
        }
        System.out.println("Letters = "+letter);
        System.out.println("Spaces = "+space);
        System.out.println("Numbers = "+number);
        System.out.println("Special Characters = "+specialchar);
    }  
}