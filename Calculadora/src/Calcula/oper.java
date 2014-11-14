package Calcula;


/**
 *
 * @author Alfredo Ochoa
 */
public class oper {

    double Vp, lmbg, te, tm, Vpg, B, lmb, lmb2, fc, fc2, c = 300000000;

    public double fc2placas(int n, double a) {
        fc = (c * n) / (2 * a);
        return fc;
    }

    public double lam2placas(double f, double fclmb) {
        lmb = c / (Math.sqrt(Math.pow(f, 2) - Math.pow(fclmb, 2)));
        return lmb;
    }

    public double Redondear(double numero) {
        return Math.rint(numero * 100) / 100;
    }

    public double fcrec(double a, double b, int m, int n) {
        fc2 = (c / 2) * (Math.sqrt(Math.pow((m / a), 2) + Math.pow((n / b), 2)));
        return fc2;
    }

    public double lmbrec(double a, double b, int m, int n) {
        lmb2 = c / (Math.sqrt(Math.pow((m / a), 2) + Math.pow((n / b), 2)));
        return lmb2;
    }

    public double brec(double f, double fcmn) {
        B = ((2 * Math.PI) / c) * (Math.sqrt(Math.pow(f, 2) - Math.pow(fcmn, 2)));
        return B;
    }

    public double vprec(double f, double fcmn) {
        Vp = c * (f / (Math.sqrt(Math.pow(f, 2) - Math.pow(fcmn, 2))));
        return Vp;
    }

    public double lmbgrec(double Bmn) {
        lmbg = (2 * Math.PI) / (Bmn);
        return lmbg;
    }
    public double zte(double f,double Bmn) {
        te=((2 * Math.PI * f)*(.00000004*Math.PI))/Bmn;
        return te;
    }
     public double ztm(double f,double fcmn) {
        tm=(120*Math.PI)*Math.sqrt(1-Math.pow((fcmn/f),2));
        return tm;
    }
     public double Vpgrec(double f,double fcmn)
     {
         Vpg=c*Math.sqrt(1-Math.pow((fcmn/f), 2));
         return Vpg;
     }

    public double truncar(double decimal, int numeroDecimales) {
        decimal = decimal * (java.lang.Math.pow(10, numeroDecimales));
        decimal = java.lang.Math.round(decimal);
        decimal = decimal / java.lang.Math.pow(10, numeroDecimales);

        return decimal;
    }
}