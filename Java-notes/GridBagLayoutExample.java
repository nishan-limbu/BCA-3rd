
package bmcunitsecond;

import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import javax.swing.JButton;
import javax.swing.JFrame;

public class GridBagLayoutExample {
    public GridBagLayoutExample(){
        JFrame frame = new JFrame("GridBag Layout Example!!");
        frame.setLayout(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();

        gbc.fill = GridBagConstraints.HORIZONTAL;
        gbc.gridx = 0;
        gbc.gridy = 0;
        frame.add(new JButton("first"),gbc);
        
        gbc.gridx = 1;
        gbc.gridy = 0;
        frame.add(new JButton("second"),gbc);
        
        gbc.fill = GridBagConstraints.HORIZONTAL;
        gbc.gridx = 0;
        gbc.gridy = 1;
        gbc.ipady = 20;
        frame.add(new JButton("third"),gbc);
        
        gbc.gridx = 1;
        gbc.gridy = 1;
        frame.add(new JButton("forth"),gbc);
        
        gbc.fill = GridBagConstraints.HORIZONTAL;
        gbc.gridx = 0;
        gbc.gridy = 2;
        gbc.gridwidth = 2;
        frame.add(new JButton("fifth"),gbc);
        
        frame.setSize(500, 500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
    public static void main(String[] args) {
        new GridBagLayoutExample();
    }
    
}
