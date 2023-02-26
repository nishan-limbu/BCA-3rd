
package bmcunitsecond;

import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTable;

public class TableExample {
    public TableExample(){
        JFrame frame = new JFrame("Table Example!!");
        
        String[][] data = {{"ram","ktm","pass"},{"shyam","lalitpur","fail"},{"hari","bhaktpur","pass"}};
        String[] column = {"name","address","result"};
        
        JTable table = new JTable(data, column);
        
        JScrollPane pane = new JScrollPane(table);

        frame.add(pane);
        frame.setSize(500, 500);
        frame.setLayout(new FlowLayout());
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
    public static void main(String[] args) {
        new TableExample();
    }
    
}
