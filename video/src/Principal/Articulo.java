/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author bLacko
 */
public class Articulo {
    String cod, tipo, titulo, cat,juego;
   // double juego;
    public void agarra(String co,String t,String tip)
    {
    titulo = t;
    tipo= tip;
    cod = co;
    }
    
    public String renta()
    {
       
      if(cod.charAt(0)== '1' && cod.charAt(1)=='1')
      {
         if(cod.charAt(2)== '0')
         {
         juego= "50";
         cat="E";
         }
         
         if(cod.charAt(2)== '1')
         {
         juego= "80";
         cat="M17";
         }
         if(cod.charAt(2)== '2')
         {
         juego= "90";
         cat="B";
         }              
      }
     
     if(cod.charAt(0)== '1' && cod.charAt(1)=='2')
     {
         if(cod.charAt(2)== '0')
         {
         juego= "50";
         cat="AA";
         }
       
         if(cod.charAt(2)== '1')
         {
         juego= "80";
         cat="B";
         }
         if(cod.charAt(2)== '2')
         {
         juego= "90";
         cat="B15";
         } 
     }
      return (" Clasificacion "+cat +"   $"+ juego);

    }
   
    
    
}
