package Clases;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author AlfredoOchoa
 */
import javax.script.ScriptException;
public class Pruebas {
   
    public static void main(String[] args) throws ScriptException {
     String cadena="2000*ln(140000/(140000-2100*x))-9.8*x";     
      Lee f=new Lee();
      f.evaluar(cadena, "8");
     // System.out.println(f.evaluar(cadena, "8"));
      System.out.println(f.getResultadoConversion());
      System.out.println(f.getResultadoOperacion());
    }
    

}
