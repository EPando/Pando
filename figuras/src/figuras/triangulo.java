/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package figuras;

/**
 *
 * @author bLacko
 */
public class triangulo extends FiguraGeometrica{
     private double base;
     private double altura;
     
     public triangulo(int b, int h)
     {
     super("Triangulo");
     base = b;
     altura = h;
     }
        public double area() 
        {            
        return base * altura/2;
        }    
    }
