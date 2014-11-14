/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class velocidadclass {
    
    
    public double desp(double time, double v, double a){
        return((v*time)+((a*Math.pow(time, 2))/2));
    }
    
}
