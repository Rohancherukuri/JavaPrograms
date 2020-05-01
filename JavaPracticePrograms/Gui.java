// Creating a Gui program in java
import javax.swing.*;
class Gui
{
	public static void main(String args[])
	{
		String n=JOptionPane.showInputDialog(null,"What is your name: ");
		if(n==null)
		{
			JOptionPane.showMessageDialog(null,"Exitting");
		}
		else
		{
			int ch=JOptionPane.showConfirmDialog(null,"is your name "+n+" ?");
			if(ch==JOptionPane.YES_OPTION)
			{
				JOptionPane.showMessageDialog(null,"Your name "+n+" is updated into the Maria database!");
	 		}	
			else
			{
				JOptionPane.showMessageDialog(null,"ERROR 404 NOT FOUND!");
			}
		}	
	}
}
