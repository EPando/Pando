/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class p39 {
    private double numero=1.00000000,M;
    
    public void Datos(double mult){
        M=mult;
    }
    
    public double fibonacci(){
        numero=numero*M;
        return(numero);
    }
}
