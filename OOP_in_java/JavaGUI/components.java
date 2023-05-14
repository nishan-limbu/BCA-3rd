package GUI;
import javax.swing.*;

public class components 
{
    public components()
    {
        JFrame frame = new JFrame("registration");

        JCheckBox box = new JCheckBox("courses");
        box.setBounds(250,160,100,30);

        JRadioButton btn1 = new JRadioButton("Male");
        JRadioButton btn2 = new JRadioButton("Female");
        btn1.setBounds(355,160,100,30);
        btn2.setBounds(355,190,205,30);

        String Region[] ={"Kathmandu","Lalitpur","Bhaktapur"};
        JComboBox choice = new JComboBox(Region);
        choice.setBounds(250,250,205,30);
        // JCheckBox checkbox = new JCheckBox("courses");
        // checkbox.setBounds(250,160,100,30);
        
        // JTextField lastname = new JTextField(" Last Name");
        // lastname.setBounds(355,160,100,30);

        // JTextField email = new JTextField(" Email");
        // email.setBounds(250,190,205,30);

        // JTextField password = new JTextField(" Password");
        // password.setBounds(250,220,205,30);

        // JTextField passwordcon = new JTextField(" Confirm Password");
        // passwordcon.setBounds(250,250,205,30);

        // JButton btn = new JButton("Register");
        // btn.setBounds(300,300,100,30);

        // frame.add(name);
        // frame.add(firstname);
        // frame.add(lastname);
        // frame.add(email);
        // frame.add(password);
        // frame.add(passwordcon);
        // frame.add(btn);
        frame.add(box);
        frame.add(btn1);
        frame.add(btn2);
        frame.add(choice);
        frame.setSize(750,500);
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String[] args)
    {
        new components();
    } 
}