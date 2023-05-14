public class Question36 
{
    public static void main(String [] ars)
    {
        System.out.println("STRING OPEARTIONS IN JAVA:");
        System.out.println();

        //string concatenation
        System.out.println("String concatenation:");
        String str1 = "Hello";
        System.out.println(str1.concat("World"));

        //determining string length
        System.out.println("Determining string length:");
        String str2 = "I love programming"; 
        int stringSize= str2.length();
        System.out.println(stringSize);

        //finding characters and substring
        System.out.println("Finding characters and substring:");
        String example = "This should be complicated enough to show some things we should show";

        // Finding the characters at the indexes given
        System.out.println("Finding the characters at the indexes given:");
        System.out.println(example.charAt(0));
        System.out.println(example.charAt(5));

        // Finding the index of characters or substrings
        System.out.println("Finding the index of characters or substrings:");
        System.out.println(example.indexOf('s')); // returns the first occurence of 's'
        System.out.println(example.indexOf('s', 4)); // the first 's' after index 4
        System.out.println(example.indexOf("should")); // the index of the first "should" in our string
        System.out.println(example.indexOf("should", 15)); // the index of the first "should" in our

        //comparing strings
        System.out.println("Comparing strings:");
        System.out.println("a".compareTo("hello"));
        System.out.println("a".compareTo("welcome"));


        //extracting substrings
        System.out.println("Extracting substrings:");
        String ourString = "Nishan";
        System.out.println(ourString.substring(0,3));
        System.out.println(ourString.substring(2));
        
        //changing string case
        System.out.println("Changing string case:");
        String sentence = "ThInK oF a ClEvEr StRiNg";
        System.out.println(sentence);
        System.out.println(ourString.toLowerCase());
        System.out.println(ourString.toUpperCase());
        
        //removing whitespaces
        System.out.println("Removing whitespaces:");
        String sentence2 = "      Any non-leading and non-trailing whitespace is  \n  preserved       ";
        System.out.println(sentence2.trim());   

        //string equality
        System.out.println("String equality:");
        String s1 = "Just a String";
        String s2 = "Just a String";

        System.out.println(s1 == s2);
        System.out.println(s1.equals(s2));


    }    
}
