//a simple program introducing a class:
// /*A program that uses the Box class 
//     Call this file BoxDemo.java
// */

// class Box{
//     double width;
//     double height;
//     double depth;
// }

// //This class declares an object of type Box.@interface

// class practice{
//     public static void main(String[] args)
//     {
//         Box mybox = new Box();
//         double vol;

//         //assign values of mybox's instance variables mybox.width = 10;
//         mybox.width = 10;
//         mybox.height = 20;
//         mybox.depth = 15;

//         //compute volume ofbox
//         vol = mybox.width * mybox.height * mybox.depth;

//         //printing the output
//         System.out.println("Volume = "+vol);
//     }
// }



//program adding a method to the Box Class:
/*
    This program includes a method inside the box class.
*/

class Box{
    double width;
    double height;
    double depth;

    //display volume of a box
    void volume(){
        double vol;
        vol=width*height*depth;
        System.out.println("Volume is "+vol);
    }
}
class practice{
    public static void main(String[] args)
    {
        double height;
        double width;
        double depth;
        Box mybox1 = new Box();
        Box mybox2 = new Box();

        //assign values to mybox1 instance variable
        mybox1.width = 10;
        mybox1.height = 20;
        mybox1.depth = 15;

        //assign values to mybox2 instance variable
        mybox2.width = 3;
        mybox2.height = 6;
        mybox2.depth = 9;

        //display voluem of first box i.e. mybox1
        mybox1.volume();
        mybox2.volume();
    }
}

