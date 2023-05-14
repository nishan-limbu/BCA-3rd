package GUI;
import javax.swing.*;
public class registrationProject 
{
    public registrationProject()
    {
        JFrame frame = new JFrame("Registration");

        JLabel name = new JLabel(" EVENT REGISTRATION FORMS");
        name.setBounds(300,80,230,30);

        JLabel first = new JLabel("Full Name");
        first.setBounds(100,130,100,30);

        JTextField firstname = new JTextField();
        firstname.setBounds(200,130,205,30);

       
        
        // JTextField lastname = new JTextField(" Last Name");
        // firstname.setBounds(315,130,150,30);

        JLabel email = new JLabel("E-mail");
        email.setBounds(100,165,100,30);

        JTextField emailbox = new JTextField(" sample@example.com ");
        emailbox.setBounds(200,165,205,30);

        JLabel gendername = new JLabel("Gender");
        gendername.setBounds(100,200,100,30);

        JRadioButton female = new JRadioButton("Female");
        female.setBounds(200,200,100,30);

        JRadioButton male = new JRadioButton("Male");
        male.setBounds(305,200,100,30);

        ButtonGroup btn = new ButtonGroup();
        btn.add(female);
        btn.add(male);

        JLabel phone = new JLabel("Phone");
        phone.setBounds(100,235,100,30);

        JTextField phonebox = new JTextField();
        phonebox.setBounds(200,235,205,30);
    
        JLabel emergency = new JLabel("Emergency Contact");
        emergency.setBounds(100,265,150,30);

        JTextField emergencybox = new JTextField();
        emergencybox.setBounds(200,300,205,30);

        JLabel q1 = new JLabel("Do you require parking?");
        q1.setBounds(100,335,230,30);

        JRadioButton yes = new JRadioButton("Yes");
        yes.setBounds(200,370,100,30);

        JRadioButton no = new JRadioButton("No");
        no.setBounds(305,370,100,30);

        ButtonGroup btn1 = new ButtonGroup();
        btn1.add(yes);
        btn1.add(no);

        JLabel q2 = new JLabel("What is your room preference?");
        q2.setBounds(100,400,305,30);

        JRadioButton one = new JRadioButton("Single Room");
        one.setBounds(200,425,205,30);

        JRadioButton two = new JRadioButton("Shared Room");
        two.setBounds(200,445,205,30);

        JRadioButton three = new JRadioButton("No Room Needed");
        two.setBounds(200,455,205,30);

        ButtonGroup btn2 = new ButtonGroup();
        btn2.add(one);
        btn2.add(two);
        btn2.add(three);

        frame.add(name);
        frame.add(first);
        frame.add(firstname);
        frame.add(gendername);
        frame.add(female);
        frame.add(male);
        frame.add(phone);
        frame.add(phonebox);
        frame.add(emergency);
        frame.add(q1);
        frame.add(email);
        frame.add(emailbox);
        frame.add(emergencybox);
        frame.add(yes);
        frame.add(no);
        frame.add(q2);
        frame.add(one);
        frame.add(two);
        frame.add(three);


        frame.setSize(840,780);
        frame.setLayout(null);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String[] args)
    {
        new registrationProject();
    } 
}
