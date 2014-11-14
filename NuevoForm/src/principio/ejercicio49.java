/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

/**
 *
 * @author bLacko
 */
public class ejercicio49 {
    double or,ar,k1;
    double res=0;
    public void orden(double o){
    or=o;
    }  
     public void argumento(double a){
    ar=a;
    }   
     public void ka(double k){
    k1=k;
    }   
     public double bessel(){
      if (or>=0)
      {
          double ele= Math.pow(-1, k1);
          double div= ar/2;
          double e= or+(2*k1);
          double ele2=Math.pow(div, e);
          int j=1;
          for(int i=1;i<=k1;i++)
            {
                i=j*i;
                j=i;
            }
          double div2= (1/(j*(or+k1)));
          
          res=ele*ele2*div2;
      }
      else 
      {
        res=((Math.pow(-1, or))*k1);  
      }
        
        return(res);    
    }
}
