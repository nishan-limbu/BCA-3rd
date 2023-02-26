
package bmcunitsecond;

import java.awt.Color;
import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.border.BevelBorder;
import javax.swing.border.LineBorder;
import javax.swing.border.TitledBorder;


public class BorderExample {
    
    public BorderExample(){
        JFrame frame  = new JFrame("Border Example!");
        
        JPanel panel = new JPanel();
        panel.add(new JLabel("This is border example!!"));
        
//        panel.setBorder(new LineBorder(Color.BLUE,5));
//        panel.setBorder(new BevelBorder(BevelBorder.LOWERED));
          panel.setBorder(new TitledBorder(new BevelBorder(BevelBorder.RAISED),"testing"));
        
        frame.add(panel);
        frame.setSize(500,500);
        frame.setLayout(new FlowLayout());
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }
    
    public static void main(String[] args) {
        new BorderExample();
    }
}
