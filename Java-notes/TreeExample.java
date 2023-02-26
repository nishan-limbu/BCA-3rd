
package bmcunitsecond;

import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JTree;
import javax.swing.tree.DefaultMutableTreeNode;

public class TreeExample {
    public TreeExample(){
        JFrame frame = new JFrame();
        
        DefaultMutableTreeNode style = new DefaultMutableTreeNode("Style");
        DefaultMutableTreeNode color = new DefaultMutableTreeNode("Color");
        DefaultMutableTreeNode font = new DefaultMutableTreeNode("Font");
        
        style.add(color);
        style.add(font);
        
        DefaultMutableTreeNode green = new DefaultMutableTreeNode("Green");
        DefaultMutableTreeNode blue = new DefaultMutableTreeNode("Blue");
        DefaultMutableTreeNode red = new DefaultMutableTreeNode("Red");
        
        color.add(green);
        color.add(blue);
        color.add(red);
        
        JTree tree = new JTree(style);
        
        frame.add(tree);
        
        frame.setLayout(new FlowLayout(FlowLayout.CENTER));
        frame.setSize(500, 500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }
    
    public static void main(String[] args) {
        new TreeExample();
    }
    
}
