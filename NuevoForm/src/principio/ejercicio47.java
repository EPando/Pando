/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

/**
 *
 * @author bLacko
 */
public class ejercicio47 {
    double tiem;
    double res=0;
    public void time(double t){
    tiem=t;
    }    
     public double distancia(){
      
        res=((-100*(1.759E11)*(Math.pow(tiem, 2)))+ (8.4E5));
        return(res);    
    }
}
