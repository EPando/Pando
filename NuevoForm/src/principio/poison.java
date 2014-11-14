/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package principio;

/**
 *
 * @author bLacko
 */
public class poison {
    double leo, lei;
    
    public void leemos(double k, double po)
    {
    leo=k;
    lei = po;
    }
    public double poissonn()
    {
       double pk;
       int y=1, fk=1;
       for(y=1;y<=leo;y++)
       {
       fk= fk*y;
       }
       pk= ((Math.pow(lei,leo)*(Math.exp(-lei)))/fk);
       return pk; 
    }
}
