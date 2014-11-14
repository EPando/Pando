/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package principio;

/**
 *
 * @author bLacko
 */
public class electron {
    
    double leo;
    public void leemos(double n)
    {
    leo=n;     
    }
    
    public double ciclo()
    {
    double e=1.6;
    
    double en= Math.pow(10, -19);
    double in= Math.pow(10, -31);
    double mo = 9.11 * in;
    double hu= e * en;
    
    double V = (mo*Math.pow(leo,2))/(2*hu);
     
    return(V);
    }
    
}
