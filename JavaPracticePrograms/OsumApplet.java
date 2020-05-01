// Parameter passing in Applet
import java.applet.Applet;
import java.awt.*;
/* <applet code="OsumApplet.class" width=300 height=300> <param name="OsumName"
 value="www.Osum.com"/> </applet> */
public class OsumApplet extends Applet
{
	private String defaultmessage="Hey EveryOne";
	public void paint(Graphics g)
	{
		String msg=getParameter("OsumName");
		if(msg==null)
			msg=defaultmessage;
		g.drawString(msg,50,50);
	}
}
