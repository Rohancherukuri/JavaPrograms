// Making music using jsyn jar file in java
import com.jsyn.JSyn;
import com.jsyn.Synthesizer;
import com.jsyn.unitgen.LineOut;
import com.jsyn.unitgen.SineOscillator;
class Music
{
  
    public static void playSound()
    {
        Synthesizer synth = JSyn.createSynthesizer();
        try
	{
            synth.start();
            SineOscillator sineOsc1 = new SineOscillator(1000, 10);
            SineOscillator sineOsc2 = new SineOscillator(1000, 10);
            LineOut lineOut= new LineOut();
            synth.add(lineOut);
            synth.add(sineOsc1);
            synth.add(sineOsc2);
            sineOsc1.output.connect(0, lineOut.input, 0); 
            sineOsc2.output.connect(0, lineOut.input, 1);
            lineOut.start();
            sineOsc1.start(); 
            sleep(500);
            sineOsc2.start(); 
            sleep(500);
            sineOsc1.stop();
            sleep(500);
            sineOsc2.stop(); 
            lineOut.stop();
        } finally {
            synth.stop();
        }
    }
    private static void sleep(int ms)
    {
        try
	{
            Thread.sleep(ms);
        } 
	catch(Exception e)
	{
          System.out.println(e);
        }
    }
    public static void main(String args[])
    {
    	System.out.println("sound started");  
      	playSound();
    	System.out.println("sound ended");    
  }
}
