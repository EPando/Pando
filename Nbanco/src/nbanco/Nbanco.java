/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package nbanco;

/**
 *
 * @author bLacko
 */
public class Nbanco {
    
    
    String Nomc, Nc;
    double saldo, mov;
    
    public void Nbanco(String ncuenta, String nombrecli)
    {
       Nc=ncuenta;
       Nomc = nombrecli;
    }
    public double Nbanco(double dep)
    {  
    mov=dep;
    return mov;
    }
    
    public String Nbanco()
    {
    String s = Nc;
    String t = Nomc;
    String r = String.valueOf(mov);
    return(" N° de cuenta: "+s+"\n Nombre: "+t+"\n Ultimo Movimiento: "+r);
    }
           
}
