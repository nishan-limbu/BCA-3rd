
package bmcunitsecond;

import java.awt.GridLayout;
import javax.swing.ButtonGroup;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class JCheckBoxExample {
    public JCheckBoxExample(){
        JFrame frame = new JFrame("CheckBox Example");
        
        JLabel label = new JLabel("Check your Choices : ");
        JCheckBox box1 = new JCheckBox("Java",true);
        JCheckBox box2 = new JCheckBox("Python");
        JCheckBox box3 = new JCheckBox("Php");
        JCheckBox box4 = new JCheckBox("C++");
        
        ButtonGroup bg = new ButtonGroup();
        bg.add(box1);
        bg.add(box2);
        bg.add(box3);
        bg.add(box4);
        
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(2, 2));
        panel.add(box1);
        panel.add(box2);
        panel.add(box3);
        panel.add(box4);
        
        frame.add(label);
        frame.add(panel);
        frame.setLayout(new GridLayout(2, 1));
        
        frame.setSize(500,500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }
    
    public static void main(String[] args) {
        new JCheckBoxExample();
    }
}
