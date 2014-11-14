/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package figuras;

/**
 *
 * @author bLacko
 */
public class TestFiguras {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        circulo c=new circulo(4);
        rectangulo r=new rectangulo(10,5);
        triangulo t= new triangulo(3,6);
        System.out.println(c);
        System.out.println(r);
        System.out.println(t);
    }
}
