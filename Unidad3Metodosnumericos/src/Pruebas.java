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
     String cadena="3^x+32+4^(2+x)";     
      Lee f=new Lee();
      f.evaluar(cadena, "2");
      System.out.println(f.getResultadoConversion());
      System.out.println(f.getResultadoOperacion());
    }
    

}
