/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class p7 {
    
    
    private double c=300000000,mo=.000000000000000000000000000000911;
    private double un,UN,res,e=.00000000000000000016,V;
    
    public void datos(double v){
        V=v;
    }
    
    public double UN(){ 
        double variable=(((1+(Math.pow(un,2)))/(2*Math.pow(c,2))));
        UN=c*(1-(1/(Math.pow(variable,2))));
        return(UN);
    }
    
    public double uno(){
        un=Math.sqrt((2*e*V)/(mo));
        return(un);
    }
}
