
package bmcunitsecond;

import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTabbedPane;
import javax.swing.JTextArea;

public class TabbedPaneExample {
    public TabbedPaneExample(){
        JFrame frame = new JFrame("TabbedPane Example!!");
        JTabbedPane pane  = new JTabbedPane();
        JPanel panel1 = new JPanel();
        JPanel panel2 = new JPanel();
        JPanel panel3 = new JPanel();
        panel1.add(new JTextArea(20, 20));
        panel2.add(new JButton("Submit"));
        panel3.add(new JLabel("This is tabbed pane exmaple!!"));
        
        pane.add("ABCD",panel1);
        pane.add("EFGH",panel2);
        pane.add("WXYZ",panel3);
        
        frame.add(pane);
        frame.setSize(600, 600);
        frame.setLayout(new FlowLayout());
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }
    public static void main(String[] args) {
        new TabbedPaneExample();
    }
    
}
