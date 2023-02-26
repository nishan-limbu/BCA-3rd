
package bmcunitsecond;

import java.awt.BorderLayout;
import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JDesktopPane;
import javax.swing.JFrame;
import javax.swing.JInternalFrame;
import javax.swing.JTextField;


public class JInternalFrameExample {
    public JInternalFrameExample(){
        JFrame.setDefaultLookAndFeelDecorated(true);
        JFrame frame = new JFrame("JInternal Frame Example!!");

        JDesktopPane pane = new JDesktopPane();

        JInternalFrame iframe1 = new JInternalFrame("InternalFrame First", true, true, true, true);
        iframe1.add(new JButton("Submit"));
        iframe1.setLayout(new FlowLayout());
        JInternalFrame iframe2 = new JInternalFrame("InternalFrame Second", true, true, true, true);
        iframe2.add(new JTextField(20));
        iframe2.setLayout(new FlowLayout());
        
        iframe1.setSize(200, 200);
        iframe2.setSize(200, 200);
        
        iframe1.setLocation(20,20);
        iframe2.setLocation(50,50);
        
        iframe1.setVisible(true);
        iframe2.setVisible(true);
        
        pane.add(iframe1);
        pane.add(iframe2);
        
        frame.add(pane);
        frame.setSize(500, 500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        
    }
    public static void main(String[] args) {
        new JInternalFrameExample();
    }
    
}
