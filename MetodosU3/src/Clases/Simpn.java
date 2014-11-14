package Clases;


import javax.swing.JOptionPane;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author AlfredoOchoa
 */
public class Simpn {

    private String x0;
    private String x1;
    private String x2;
    private String y0;
    private String y1 = "0";
    private String y2 = "0";
    private String y3;
    private int seg;
    private String area;

    public Simpn() {
    }

    public String CalcularSimpson(String funcion, String x0, String x2, String seg) {
        Lee f = new Lee();
        this.x0 = x0;
        this.x2 = x2;
        this.seg = Integer.parseInt(seg);
        if((this.seg %2)==0){
        this.x1 = (Double.parseDouble(this.x2) + Double.parseDouble(this.x0)) / this.seg + "".trim();
        int k = 1;
        double inicio = Double.parseDouble(this.x0);
        double limite = Double.parseDouble(this.x2);
        while (inicio < limite) {
            inicio=f.getDecimal(inicio, 3);
            if ((k % 2) == 0) {
                this.y1 =Double.parseDouble(this.y1)+(4 * Double.parseDouble(f.evaluar(funcion, String.valueOf(inicio)))) + "".trim();
                k++;
            } else {
                if (k > 1) {
                    this.y2 = Double.parseDouble(this.y1)+(2 * Double.parseDouble(f.evaluar(funcion, String.valueOf(inicio)))) + "".trim();
                    k++;
                }else{
                    k++;
                }
            }
            inicio += Double.parseDouble(this.x1);
        }
        this.y0 = f.evaluar(funcion, this.x0);
        this.y3 = f.evaluar(funcion, this.x2);
        this.area = ((Double.parseDouble(this.x2)-Double.parseDouble(this.x0))/3) *((Double.parseDouble(this.y0)+(Double.parseDouble(this.y1))+Double.parseDouble(this.y2)+Double.parseDouble(this.y3)))/this.seg + "".trim();
        }else{
            JOptionPane.showMessageDialog(null, "El numero de segmentos introducidos NO ES PAR");
            this.area="Error";
        }
        return this.area;
    }

    public String getarea() {
        return this.area;
    }
}
