package swing;
import javax.sqing.*;
import javax.awt.GridLayout;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvemt;
public class Question34
{
    JLabel l1,l2,l3;
    JTextField t1,t2,t3;
    // JFrame f = new JFrame();
    Question34()
    {
        l1 = new Jlabel("First num:");
        t1 = new JTextField();

        l2 = new Jlabel("Secpmd num:");
        t2 = new JTextField();

        l3 = new Jlabel("Press any Key:");
        t3 = new JTextField();
        t3.addKeyListener(new kechecker());

        frame.add(l1);
        frame.add(t1);
        frame.add(l2);
        frame.add(t2);
        frame.add(l3);
        frame.add(t3);

        frame.setSize(25,25);
        frame.setLayout(new GridLayout(3,2));
        frame.setLocationRelativeTo(null);
        frame.setDefaultcloseOperation(frame.EXIT_ON_CLOSE);
    }
    class keychecker extends KeyAdapter
    {
        public void keyPressed(KeyEvent e)
        {
            int firstnum= Integer.parseInt(t1.getText());
            int secondnum= Integer.parseInt(t2.getText());
            int sum = firstnum+secondnum;
            JOptionPane.showMessgeDialog(f,"The sum is  "+sum);
            t3.setT3ext(null);
        }
    }
    public static void main(String[] args)
    {
        new Question34();
    }
}