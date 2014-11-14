/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class p2 {
    private int j,i;
    private double X,N,seno=0.0,factorial;
    
    public void leeGrados(double n, double grados){
        N=n;
        X=grados;
    }
    
    public double CalcularSeno(){
        
        seno=0;
    
        for(i=1;i<=N;i++)
        {
            for(j=i;j<=(2*i-1);j++)
            {
             factorial=factorial+i;
            }
            seno=seno + ((Math.pow(0-1,i+1))*((Math.pow(X,(2*i)-1))/(factorial*1.0)));
        }
        return(seno);
    }
}
