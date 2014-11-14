/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Principal;

/**
 *
 * @author omar
 */
public class principalclass {
    
    protected String nombre;
    protected String apellido;
    protected String apellido2;
    protected String ano;
    protected String mes;
    protected String dia;
    protected String ent;
     
    protected char curpp;
    protected char curpp0;
     protected char curpp1;
     protected char curpp2;
     protected char curpp3;
     protected char curpp4;
      protected char curpp5;
      protected char curpp6;
      protected char curpp7;
      protected char curpp8;
      protected char curpp9;
      protected char curpp10;
      protected char curpp11;
      protected char curpp12;
      protected char curpp13;

      
    public void leenombre(String n) {
        nombre=n;
    }
    public void entidad(String n) {
        ent=n;
    }
    public void apellidoo(String n) {
        apellido=n;
    }
    public void apellidoo2(String n) {
       apellido2=n;
    }
    
    public void ano3(String n) {
        ano=n;
    }
    
    public void mes2(String n) {
        mes=n;
    }
    
    public void dia2(String n) {
        dia=n;
    }
    public String curp() {
        curpp=nombre.charAt(0);
        return(String.valueOf(curpp));
    }
    
    public String curp0() {
       int i, ii=0;
       char iii;
       for(i=1;i<15;i++){
           curpp0=nombre.charAt(i);
       if(curpp0=='a'){
           curpp0='a';
           i=15;
           ii=1;
         }
       if(curpp0=='e'){
           curpp0='e';
           i=15;
           ii=1;
        }
       
       if(curpp0=='i'){
           curpp0='i';
           i=15;
           ii=1;
        }
       
       if(curpp0=='o'){
        curpp0='o';
           i=15;
           ii=1;
        }
       
       if(curpp0=='u'){
        curpp0='u';
           i=15;
           ii=1;
        }
              
       }
       return(String.valueOf(curpp0));
    }
    
    public String curp1() {
        curpp1=apellido.charAt(0);
        return(String.valueOf(curpp1));
    }
    public String curp2() {
        curpp2=apellido2.charAt(0);
        return(String.valueOf(curpp2));
    }
    public String curp3() {
        curpp3=ano.charAt(2);
        return(String.valueOf(curpp3));
    }
 public String curp4() {
        curpp4=ano.charAt(3);
        return(String.valueOf(curpp4));
    }
    
public String curp5() {
        curpp5=mes.charAt(0);
        return(String.valueOf(curpp5));
    }
public String curp6() {
        curpp6=mes.charAt(1);
        return(String.valueOf(curpp6));
    }
public String curp7() {
        curpp7=dia.charAt(0);
        return(String.valueOf(curpp7));
    }

public String curp8() {
        curpp8=dia.charAt(1);
        return(String.valueOf(curpp8));
    }
public String curp9() {
        curpp9=ent.charAt(0);
        return(String.valueOf(curpp9));
    }
public String curp10() {
        curpp10=ent.charAt(1);
        return(String.valueOf(curpp10));
    }
public String curp11() {
       int i, ii=0, j=15;
   
       for(i=1;i<j;i++){
       curpp11=nombre.charAt(i);
       if(curpp11=='a'){
           ii=1;
         }
       if(curpp11=='e'){
           ii=1;
        }
       
       if(curpp11=='i'){
           ii=1;
        }
        if(curpp11=='o'){       ii=1;
        }
       if(curpp11=='u'){       ii=1;
        }
    
       if(ii==0){
       curpp11=nombre.charAt(i);
       j=i;
       }
       ii=0;
       }

       
       return(String.valueOf(curpp11));
    }

//////

public String curp12() {
       int i, ii=0, j=15;
   
       for(i=1;i<j;i++){
       curpp12=apellido.charAt(i);
       if(curpp12=='a'){
           ii=1;
         }
       if(curpp12=='e'){
           ii=1;
        }
       
       if(curpp12=='i'){
           ii=1;
        }
        if(curpp12=='o'){       ii=1;
        }
       if(curpp12=='u'){       ii=1;
        }
    
       if(ii==0){
       curpp12=apellido.charAt(i);
       j=i;
       }
       ii=0;
       }

       
       return(String.valueOf(curpp12));
    }
/////

public String curp13() {
       int i, ii=0, j=15;
   
       for(i=1;i<j;i++){
       curpp13=apellido2.charAt(i);
       if(curpp13=='a'){
           ii=1;
         }
       if(curpp13=='e'){
           ii=1;
        }
       
       if(curpp13=='i'){
           ii=1;
        }
        if(curpp13=='o'){       ii=1;
        }
       if(curpp13=='u'){       ii=1;
        }
    
       if(ii==0){
       curpp13=apellido2.charAt(i);
       j=i;
       }
       ii=0;
       }

       
       return(String.valueOf(curpp13));
    }


}
