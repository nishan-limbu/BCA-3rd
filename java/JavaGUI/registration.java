package GUI;
import javax.swing.*;

public class registration 
{
    public registration()
    {
        JFrame frame = new JFrame("registration");

        JLabel name = new JLabel(" REGISTER NOW");
        name.setBounds(290,130,130,30);

        JTextField firstname = new JTextField(" First Name");
        firstname.setBounds(250,160,100,30);
        
        JTextField lastname = new JTextField(" Last Name");
        lastname.setBounds(355,160,100,30);

        JTextField email = new JTextField(" Email");
        email.setBounds(250,190,205,30);

        JTextField password = new JTextField(" Password");
        password.setBounds(250,220,205,30);

        JTextField passwordcon = new JTextField(" Confirm Password");
        passwordcon.setBounds(250,250,205,30);

        JButton btn = new JButton("Register");
        btn.setBounds(300,300,100,30);

        frame.add(name);
        frame.add(firstname);
        frame.add(lastname);
        frame.add(email);
        frame.add(password);
        frame.add(passwordcon);
        frame.add(btn);

        frame.setSize(750,500);
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String[] args)
    {
        new registration();
    } 
}