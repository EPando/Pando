/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class p35 {
    private double A,B,ho,h3,k,U,UO;
    
    public void DATOS(double h,double u,double uo,double a,double b){
        U=u;
        UO=uo;
        A=a;
        B=b;
    }
    
    public double K(){
        k=(1+(2*U/2*UO))-2*Math.pow(A/B,3)*Math.pow(U/UO-1,2);
        return(k);
    }
    
    public double H3(){
             h3=((9*ho)*(U/UO))/k;
             return(h3);
    }
}
