// Creating a digital clocki inside an Applet in java
import java.applet.Applet;
import java.awt.*;
import java.util.*;
// <applet code="AppletClock.class" width=300 height=300> </applet>
public class AppletClock extends Applet implements Runnable
{
	Thread t1,t2;
	public void start()
	{
		t1=new Thread(this);
		t1.start();
	}
	public void run()
	{
		t2=Thread.currentThread();
		while(t2==t1)
		{
			repaint();
			try
			{
				t2.sleep(1000);
			}
			catch(InterruptedException ie)
			{
				System.out.println("Exception Caught"+ie);
				System.out.println("Inside Thread-2");
			}
		}
	}
	public void paint(Graphics g)
	{
		Calendar cal=new GregorianCalendar();
		String hour=String.valueOf(cal.get(Calendar.HOUR));
		String minute=String.valueOf(cal.get(Calendar.MINUTE));
		String second=String.valueOf(cal.get(Calendar.SECOND));
		g.drawString(hour+" : "+minute+" : "+second+" : ",100,100);
	}
}


