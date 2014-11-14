/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class propanoclass {
   
    public double res;
    public double co2(double x){
        x=x/100;
        if(x<=1){
            res=(3/28.8)*100*x;
        }
        else{
            res=(3/28.8)*100;
        }
        return(res);
            
    }
    
    public double co(double x){
        x=x/100;
        if(x<=1){
            res=(3/28.8)*100*(1-x);
        }
        else{
            res=(5/28.8)*100*(x-1);
        }
        return(res);
    }
    
    public double n(double x){
      x=x/100;
        
      res=(18.8/28.8)*100*(x);
      return(res);
    }
    

    
}
