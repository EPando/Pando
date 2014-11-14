/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class p9 {
    
    private double pk,n,P,Q,fact=1,fact1=1,fact2=1,K;
    
    public void leeDatos(double N, double p,double k){
    n=N;
    P=p;
    K=k;
    Q=1-P;
    }
    
    public double PK(){
        for(int i=1;i<=K;i++)
        {
            fact2=fact*i;
        }
        for(int i=1;i<=n-K;i++)
        {
            fact1=fact*i;
        }
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        double mult=Math.pow(P,K)*Math.pow(Q,n-K);
        pk=fact/(fact1*fact2)*mult;
        return(pk);
    }
}
