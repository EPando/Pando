/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class absorcionclass {
    double A1, A2,R1,R2, x, c, x1, y1, y2;

    public void leer(double a1, double a2,double r1,double r2){
      A1=a1;
      A2=a2;
      R1=r1;
      R2=r2;
   }
   
    public double resolver(){
    c=(Math.log((R1*A2)/(R2*A1)))/(Math.log((100-R1)/(100-R2)));
    y1=100-(R1/100);
    y2=100-(R2/100);
    x1=R1/A1;
    x=Math.exp((Math.log(x1)+c*(Math.log(y2)-Math.log(y1))));    
    return (x) ;
    }
    
}
