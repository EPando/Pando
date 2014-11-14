/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package figuras;

/**
 *
 * @author bLacko
 */
    
    public abstract class FiguraGeometrica
    {
        
        public abstract double area();
        private String nombre;
       
        public FiguraGeometrica(String nom)
        {
        nombre = nom;
        }
        
        public String toString()
        {
        return nombre + " (Area= "+ area()+")";
        }
        public String getNombre()
        {
        return nombre;
        }
        public void SetNombre(String Nombre)
        {
        this.nombre = nombre;
        }
    } 
    
    
    
    /**
     * @param args the command line arguments
     */
    

