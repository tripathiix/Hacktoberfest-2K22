//this java program will change the background & foreground color on button click.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Jbtn_color1 extends JFrame implements ActionListener
{
	JButton b1,b2;
	JLabel lbl1;
	Container con;

	Jbtn_color1(String s)
	{
		super(s);
		setSize(300,300);
		con=getContentPane();
		con.setLayout(new FlowLayout(FlowLayout.LEFT));

		b1=new JButton ("Red");
		b1.addActionListener(this);
		con.add(b1);

		b2=new JButton("Blue");
		b2.addActionListener(this);
		con.add(b2);

		lbl1=new JLabel("Color Demo");
		con.add(lbl1);

		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent we)
			{
				System.exit(0);
			}
		});
	}
	public void actionPerformed(ActionEvent e)
		{
			if (e.getActionCommand()=="Red") 
			{
				lbl1.setText("Fruit Display");
				b1.setOpaque(true);
				b1.setBackground(Color.red);
				b1.setForeground(Color.blue);
				con.add(b1);
				System.out.println(e.getActionCommand());
			}
			else if (e.getActionCommand()=="Blue") 
			{
				lbl1.setText("abc Display");
				b2.setOpaque(true);
				b2.setBackground(Color.blue);
				b2.setForeground(Color.red);
				con.add(b2);
				System.out.println(e.getActionCommand());
			}
		}
}
class Jbtn_color
{
	public static void main(String[] args) 
	{
		Jbtn_color1 fb = new Jbtn_color1("Button Click");
		fb.setVisible(true);	
	}
}