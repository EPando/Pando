/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package figuras;

/**
 *
 * @author bLacko
 */
    
public class circulo extends FiguraGeometrica{
    private int radio;
    public circulo(int r)
    {
    super("Circulo");
    radio=r;
    }
        
    public double area()
    {
    return Math.PI*Math.pow(radio, 2);
    }
    }
