package Clases;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Vikoz
 */
public class Simpson1tercio {
    private String h0;
  private String h1;
  private String h2;
  private String y0;
  private String y1;
  private String y2;
  private String area;

  public Simpson1tercio() {
  }
  public String CalcularIntegral(String fn, String h0, String h2){
      this.h0=h0;
      this.h2=h2;
      this.h1=(Double.parseDouble(this.h0)+Double.parseDouble(this.h2))/2+"".trim();
      Lee f= new Lee();
      this.y0=f.evaluar(fn,this.h0);
      this.y1= ((Double.parseDouble(f.evaluar(fn,this.h1))))+"".trim();
      this.y2=f.evaluar(fn,this.h2);
     this.area=((Double.parseDouble(this.h2)-Double.parseDouble(this.h0))* ((Double.parseDouble(this.y0)+(Double.parseDouble(this.y1)*4)+Double.parseDouble(this.y2)))/6)+"".trim();
      return this.area;
  }

  public String getArea() {
    return area;
  }

}
