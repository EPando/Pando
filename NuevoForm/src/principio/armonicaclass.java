/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class armonicaclass {
    double res=0;
    public double armonic(double n){
    for(double i=0;i<=n;i++){
        res=(res)+(1/i);
    }
        res=n/res;
        return(res);
    }
    
}
