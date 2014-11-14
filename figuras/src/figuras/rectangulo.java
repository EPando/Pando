/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package figuras;

/**
 *
 * @author bLacko
 */
public class rectangulo extends FiguraGeometrica{
    private double base;
    private double altura;
   
    public rectangulo (double b, double h)
    {
    super("Rectangulo");
    base=b;
    altura=h;
    }
    
       
    public double area()
    {
    return base*altura;
    }
    
    //:
    //setters y getters
    //:        
    }
      

