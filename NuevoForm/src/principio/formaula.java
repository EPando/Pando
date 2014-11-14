/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package principio;

/**
 *
 * @author bLacko
 */
public class formaula {
    double leo;
    
    public void leemos(double n)
    {
    leo=n;
    }
    public double presion(int p)
    {
       double w, press=100;
       double divide;
       divide=press/p;
       w= (press * leo)*(Math.log(divide));
       return w; 
    }
}
