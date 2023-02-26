
package bmcunitsecond;

import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.HeadlessException;
import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

public class JScrollPaneExample extends JFrame{

    public JScrollPaneExample(){
        
        Container container = getContentPane();
        JTextArea area = new JTextArea(20,20);
        JScrollPane  pane  = new JScrollPane(area);
        
        pane.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_ALWAYS);
        pane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_ALWAYS);
        
        container.add(pane);
        container.setLayout(new FlowLayout());
        setSize(500, 500);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
   
    }
    
    public static void main(String[] args) {
        new JScrollPaneExample();
    }
    
    
    
    
    
}
