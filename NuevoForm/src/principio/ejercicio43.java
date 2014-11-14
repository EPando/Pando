/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

/**
 *
 * @author bLacko
 */
public class ejercicio43 {
    double vo,vi,f;
    double res=0;
    public void vole(double ve){
    vo=ve;
    }
    public void vols(double vs){
    vi=vs;
    }
    public void filtro(double n){
    f=n;
    }
     public double dB(){
      
        double res=Math.log10(f)* (vo/vi);
        return(res);    
    }
    
}
