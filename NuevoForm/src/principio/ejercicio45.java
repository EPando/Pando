/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

/**
 *
 * @author bLacko
 */
public class ejercicio45 {
    double a;
    double res=0;
    public void alfa(double al){
    a=al;
    }    
     public double valor(){
      
        double op1=(1-(Math.pow(a, 2)*.12)+(Math.pow(a,4)*.02145));
        double op2= op1+(Math.pow(a, 6)*.02145);
        res=op1/op2;
        return(res);    
    }
}
