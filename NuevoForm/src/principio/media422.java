/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package principio;

/**
 *
 * @author bLacko
 */
public class media422 {
    
    double leo;
    public void leemos(double n)
    {
    leo=n;     
    }
    
    public double ciclo()
    {
    double me=0, o=1.0, expo=0;
    int g=1;
    do
    {
      o=leo*o;
      expo= (1/g);
      me= Math.pow(o, expo);
      leo= leo + 0.3;
      g=g++;
    }
    while(me<1.9);
     
    return(me);
    }
    
    
}
